/**
 * ____________________________________________________
 * tdslite byte swap utility function unit tests
 *
 * @file   ut_byte_swap.cpp
 * @author Mustafa K. GILOR <mustafagilor@gmail.com>
 * @date   12.04.2022
 *
 * SPDX-License-Identifier:    MIT
 * ____________________________________________________
 */

#include <tdslite/detail/tds_byte_swap.hpp>
#include <tdslite/detail/tds_endian.hpp>
#include <tdslite/detail/tds_inttypes.hpp>
#include <gtest/gtest.h>

class endian_f : public ::testing::Test {};

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap8_unsigned) {
    constexpr auto subject                      = tdslite::uint8_t{0xAB};
    constexpr decltype(subject) expected_result = {0xAB};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap8_signed) {
    constexpr auto subject                      = tdslite::int8_t{0x15};
    constexpr decltype(subject) expected_result = {0x15};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap16_unsigned) {
    constexpr auto subject                      = tdslite::uint16_t{0xFFAA};
    constexpr decltype(subject) expected_result = {0xAAFF};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap16_signed) {
    constexpr auto subject                      = tdslite::int16_t{0x0102};
    constexpr decltype(subject) expected_result = {0x0201};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap32_unsigned) {
    constexpr auto subject                      = tdslite::uint32_t{0xAABBCCDD};
    constexpr decltype(subject) expected_result = {0xDDCCBBAA};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap32_signed) {
    constexpr auto subject                      = tdslite::int32_t{0x01020304};
    constexpr decltype(subject) expected_result = {0x04030201};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap64_unsigned) {
    constexpr auto subject                      = tdslite::uint64_t{0xAABBCCDDEEFFAABB};
    constexpr decltype(subject) expected_result = {0xBBAAFFEEDDCCBBAA};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, swap64_signed) {
    constexpr auto subject                      = tdslite::int64_t{0x0101010102020202};
    constexpr decltype(subject) expected_result = {0x0202020201010101};
    EXPECT_EQ(expected_result, tdslite::detail::swap_endianness(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, network_to_host) {
    constexpr auto subject = tdslite::int64_t{0x0101010102020202};

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    constexpr decltype(subject) expected_result = {0x0202020201010101};
#else
    constexpr decltype(subject) expected_result = subject;
#endif

    EXPECT_EQ(expected_result, tdslite::detail::network_to_host(subject));
}

// --------------------------------------------------------------------------------

TEST_F(endian_f, host_to_network) {
    constexpr auto subject = tdslite::int64_t{0x0101010102020202};

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    constexpr decltype(subject) expected_result = {0x0202020201010101};
#else
    constexpr decltype(subject) expected_result = subject;
#endif

    EXPECT_EQ(expected_result, tdslite::detail::host_to_network(subject));
}
