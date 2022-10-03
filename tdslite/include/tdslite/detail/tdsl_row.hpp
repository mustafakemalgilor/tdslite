/**
 * _________________________________________________
 *
 * @file   tdsl_row.hpp
 * @author Mustafa Kemal GILOR <mustafagilor@gmail.com>
 * @date   29.09.2022
 *
 * SPDX-License-Identifier:    MIT
 * _________________________________________________
 */

#pragma once

#include <tdslite/detail/tdsl_allocator.hpp>
#include <tdslite/util/tdsl_span.hpp>
#include <tdslite/util/tdsl_inttypes.hpp>
#include <tdslite/util/tdsl_expected.hpp>
#include <tdslite/util/tdsl_noncopyable.hpp>

namespace tdsl {

    /**
     * Non-owning field view.
     */
    struct tdsl_field {
        tdsl::span<const tdsl::uint8_t> data;
        // Should be interpreted as column type
    };

    struct tdsl_row : util::noncopyable {
        using field_allocator_t = tds_allocator<tdsl_field>;
        tdsl::span<tdsl_field> fields;

        enum class e_tdsl_row_make_err
        {
            MEM_ALLOC = -1
        };

        /**
         * Allocate space for @p n_col fields and make a row object
         *
         * @param n_col number of columns
         *
         * @return tdsl_row with n_col field on success
         * @return e_tdsl_row_make_err::FAILURE_MEM_ALLOC on failure
         */
        static inline tdsl::expected<tdsl_row, e_tdsl_row_make_err> make(tdsl::uint32_t n_col) {
            tdsl_field * fields = field_allocator_t::create_n(n_col);
            if (fields) {
                return TDSL_MOVE(tdsl::expected<tdsl_row, e_tdsl_row_make_err>{tdsl_row(fields, n_col)});
            }
            return tdsl::unexpected<e_tdsl_row_make_err>(e_tdsl_row_make_err::MEM_ALLOC);
        }

        tdsl_row(tdsl_row && other) {
            fields       = other.fields;
            other.fields = tdsl::span<tdsl_field>();
        }

        tdsl_row & operator=(tdsl_row && other) {
            fields       = other.fields;
            other.fields = tdsl::span<tdsl_field>();
            return *this;
        }

        ~tdsl_row() {
            if (fields) {
                field_allocator_t::destroy_n(fields.data(), fields.size());
                fields = tdsl::span<tdsl_field>();
            }
        }

    private:
        /**
         * Private c-tor
         *
         * Takes ownership of @p fields
         *
         * Hint: use make() function
         * to make instances of row.
         *
         * @param fields Allocated fields
         * @param field_count Field count
         */
        explicit tdsl_row(tdsl_field * fields, tdsl::uint32_t field_count) : fields(fields, field_count) {}
    };
} // namespace tdsl