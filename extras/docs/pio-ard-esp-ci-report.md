The output below is compilation result of `examples/esp/esp.cpp` in all platform io supported boards that has ESP* MCU (@01/12/2022).

`pio boards --json-output | jq -c '.[] | select(.mcu|contains("ESP")) | .id' | xargs printf -- '--board\0%s\0' | tr '\n' '\0' | xargs -0 pio ci examples/esp/esp.cpp`

```bash
Environment                       Status    Duration
--------------------------------  --------  ------------
gen4iod                           SUCCESS   00:00:04.476
esp32cam                          SUCCESS   00:00:05.702
alksesp32                         SUCCESS   00:00:05.726
az-delivery-devkit-v4             SUCCESS   00:00:05.758
featheresp32                      SUCCESS   00:00:05.682
featheresp32-s2                   SUCCESS   00:00:05.367
adafruit_feather_esp32_v2         SUCCESS   00:00:05.910
adafruit_feather_esp32s2_tft      SUCCESS   00:00:05.593
adafruit_feather_esp32s3          SUCCESS   00:00:05.518
adafruit_feather_esp32s3_nopsram  SUCCESS   00:00:05.600
adafruit_feather_esp32s3_tft      SUCCESS   00:00:05.556
adafruit_funhouse_esp32s2         SUCCESS   00:00:05.362
huzzah                            SUCCESS   00:00:04.518
adafruit_itsybitsy_esp32          SUCCESS   00:00:05.916
adafruit_magtag29_esp32s2         SUCCESS   00:00:05.296
adafruit_metro_esp32s2            SUCCESS   00:00:05.380
adafruit_qtpy_esp32               SUCCESS   00:00:05.940
adafruit_qtpy_esp32c3             SUCCESS   00:00:03.755
adafruit_qtpy_esp32s2             SUCCESS   00:00:05.377
adafruit_qtpy_esp32s3_nopsram     SUCCESS   00:00:05.581
nodemcu-32s2                      SUCCESS   00:00:05.143
airm2m_core_esp32c3               SUCCESS   00:00:03.892
espea32                           SUCCESS   00:00:05.786
bpi-bit                           SUCCESS   00:00:05.772
wifiduino32                       SUCCESS   00:00:05.763
wifiduino32s3                     SUCCESS   00:00:05.372
wifiduino32c3                     SUCCESS   00:00:03.843
briki_abc_esp32                   FAILED    00:00:02.013
briki_mbc-wb_esp32                FAILED    00:00:02.052
cnrs_aw2eth                       SUCCESS   00:00:05.740
connaxio_espoir                   SUCCESS   00:00:05.771
d-duino-32                        SUCCESS   00:00:05.756
dfrobot_beetle_esp32c3            SUCCESS   00:00:03.785
dfrobot_firebeetle2_esp32s3       SUCCESS   00:00:05.397
esp32doit-devkit-v1               SUCCESS   00:00:05.768
esp32doit-espduino                SUCCESS   00:00:05.716
deneyapkart                       SUCCESS   00:00:05.838
deneyapkart1A                     SUCCESS   00:00:05.853
deneyapkartg                      SUCCESS   00:00:03.720
deneyapmini                       SUCCESS   00:00:05.182
denky_d4                          SUCCESS   00:00:05.732
denky32                           SUCCESS   00:00:05.839
minimain_esp32s2                  FAILED    00:00:03.217
oak                               SUCCESS   00:00:04.601
pocket_32                         SUCCESS   00:00:05.719
espmxdevkit                       SUCCESS   00:00:04.562
esp_wroom_02                      SUCCESS   00:00:04.561
fm-devkit                         SUCCESS   00:00:05.726
pico32                            SUCCESS   00:00:05.708
esp32s3camlcd                     SUCCESS   00:00:05.451
esp32vn-iot-uno                   SUCCESS   00:00:05.748
espduino                          SUCCESS   00:00:04.549
espectro                          SUCCESS   00:00:04.484
espectro32                        SUCCESS   00:00:05.830
espino                            SUCCESS   00:00:04.518
espino32                          SUCCESS   00:00:05.782
espresso_lite_v1                  SUCCESS   00:00:04.543
espresso_lite_v2                  SUCCESS   00:00:04.658
etboard                           SUCCESS   00:00:05.830
esp320                            SUCCESS   00:00:05.755
atmegazero_esp32s2                SUCCESS   00:00:05.312
esp-wrover-kit                    SUCCESS   00:00:05.720
esp32dev                          SUCCESS   00:00:05.755
esp32-c3-devkitm-1                SUCCESS   00:00:03.803
esp32-s2-kaluga-1                 SUCCESS   00:00:05.123
esp32-s2-saola-1                  SUCCESS   00:00:05.085
esp32s3box                        SUCCESS   00:00:05.355
esp32-s3-devkitc-1                SUCCESS   00:00:05.459
esp12e                            SUCCESS   00:00:04.553
esp01_1m                          SUCCESS   00:00:04.505
esp01                             SUCCESS   00:00:04.522
esp07                             SUCCESS   00:00:04.541
esp07s                            SUCCESS   00:00:04.512
firebeetle32                      SUCCESS   00:00:05.689
piranha_esp32                     SUCCESS   00:00:05.651
franzininho_wifi_esp32s2          SUCCESS   00:00:05.216
esp32-s2-franzininho              FAILED    00:00:10.884
franzininho_wifi_msc_esp32s2      SUCCESS   00:00:05.276
frogboard                         SUCCESS   00:00:05.755
esp8285                           SUCCESS   00:00:04.577
honeylemon                        SUCCESS   00:00:05.921
heltec_wifi_kit_32                SUCCESS   00:00:05.821
heltec_wifi_kit_32_v2             SUCCESS   00:00:05.764
heltec_wifi_lora_32               SUCCESS   00:00:05.735
heltec_wifi_lora_32_V2            SUCCESS   00:00:05.885
heltec_wifi_kit_8                 SUCCESS   00:00:04.555
heltec_wireless_stick             SUCCESS   00:00:05.731
heltec_wireless_stick_lite        SUCCESS   00:00:05.816
hornbill32dev                     SUCCESS   00:00:05.777
hornbill32minima                  SUCCESS   00:00:05.805
inex_openkb                       SUCCESS   00:00:05.868
imbrios-logsens-v1p1              SUCCESS   00:00:05.878
intorobot                         SUCCESS   00:00:05.803
inventone                         SUCCESS   00:00:04.526
iotaap_magnolia                   SUCCESS   00:00:05.810
kits-edu                          SUCCESS   00:00:05.679
sensesiot_weizen                  SUCCESS   00:00:05.749
labplus_mpython                   SUCCESS   00:00:05.782
agruminolemon                     SUCCESS   00:00:04.532
lionbit                           SUCCESS   00:00:05.841
m5stack-core-esp32                SUCCESS   00:00:05.864
m5stack-core2                     SUCCESS   00:00:05.771
m5stack-fire                      SUCCESS   00:00:05.821
m5stack-grey                      SUCCESS   00:00:05.709
m5stack-station                   SUCCESS   00:00:05.717
m5stack-timer-cam                 SUCCESS   00:00:05.744
m5stack-atom                      SUCCESS   00:00:05.706
m5stack-coreink                   SUCCESS   00:00:05.717
m5stick-c                         SUCCESS   00:00:05.862
mgbot-iotik32a                    SUCCESS   00:00:05.786
mgbot-iotik32b                    SUCCESS   00:00:05.752
mhetesp32devkit                   SUCCESS   00:00:05.740
mhetesp32minikit                  SUCCESS   00:00:05.794
magicbit                          SUCCESS   00:00:05.801
kb32-ft                           SUCCESS   00:00:05.813
nano32                            SUCCESS   00:00:05.839
microduino-core-esp32             SUCCESS   00:00:05.774
node32s                           SUCCESS   00:00:05.756
nodemcu                           SUCCESS   00:00:04.539
nodemcuv2                         SUCCESS   00:00:04.664
nodemcu-32s                       SUCCESS   00:00:05.843
quantum                           SUCCESS   00:00:06.019
odroid_esp32                      SUCCESS   00:00:05.966
esp32-devkitlipo                  SUCCESS   00:00:05.936
esp32-evb                         SUCCESS   00:00:05.914
esp32-gateway                     SUCCESS   00:00:05.914
esp32-pro                         SUCCESS   00:00:05.890
esp32-poe                         SUCCESS   00:00:05.888
esp32-poe-iso                     SUCCESS   00:00:05.911
oroca_edubot                      SUCCESS   00:00:05.882
modwifi                           SUCCESS   00:00:04.693
onehorse32dev                     SUCCESS   00:00:05.854
phoenix_v1                        SUCCESS   00:00:04.713
phoenix_v2                        SUCCESS   00:00:04.686
healthypi4                        SUCCESS   00:00:05.901
pycom_gpy                         SUCCESS   00:00:05.776
lopy                              SUCCESS   00:00:05.741
lopy4                             SUCCESS   00:00:05.706
wipy3                             SUCCESS   00:00:05.780
qchip                             SUCCESS   00:00:05.714
s_odi_ultra                       SUCCESS   00:00:05.747
sg-o_airMon                       SUCCESS   00:00:05.752
watchy                            SUCCESS   00:00:05.793
eduinowifi                        SUCCESS   00:00:04.576
seeed_xiao_esp32c3                SUCCESS   00:00:03.804
wesp32                            SUCCESS   00:00:05.652
bee_motion                        SUCCESS   00:00:05.289
bee_motion_mini                   SUCCESS   00:00:03.889
bee_motion_s3                     SUCCESS   00:00:05.610
bee_s3                            SUCCESS   00:00:05.514
sonoff_basic                      SUCCESS   00:00:04.479
sonoff_s20                        SUCCESS   00:00:04.525
sonoff_sv                         SUCCESS   00:00:04.595
sonoff_th                         SUCCESS   00:00:04.547
sparkfunBlynk                     SUCCESS   00:00:04.614
sparkfun_esp32_iot_redboard       SUCCESS   00:00:05.805
sparkfun_esp32micromod            SUCCESS   00:00:05.795
esp32thing                        SUCCESS   00:00:05.903
esp32thing_plus                   SUCCESS   00:00:05.922
sparkfun_esp32s2_thing_plus_c     SUCCESS   00:00:05.930
sparkfun_esp32s2_thing_plus       SUCCESS   00:00:05.208
thing                             SUCCESS   00:00:04.573
thingdev                          SUCCESS   00:00:04.642
sparkfun_lora_gateway_1-channel   SUCCESS   00:00:05.906
esp210                            SUCCESS   00:00:04.626
dpu_esp32                         SUCCESS   00:00:05.765
tamc_termod_s3                    SUCCESS   00:00:05.652
ttgo-lora32-v1                    SUCCESS   00:00:05.700
ttgo-lora32-v2                    SUCCESS   00:00:05.781
ttgo-lora32-v21                   SUCCESS   00:00:05.780
ttgo-t-beam                       SUCCESS   00:00:05.750
ttgo-t-oi-plus                    SUCCESS   00:00:03.844
ttgo-t-watch                      SUCCESS   00:00:05.844
ttgo-t1                           SUCCESS   00:00:05.708
ttgo-t7-v13-mini32                SUCCESS   00:00:05.744
ttgo-t7-v14-mini32                SUCCESS   00:00:05.779
espinotee                         SUCCESS   00:00:04.543
trueverit-iot-driver              SUCCESS   00:00:05.710
trueverit-iot-driver-mk2          SUCCESS   00:00:05.757
trueverit-iot-driver-mk3          SUCCESS   00:00:05.815
turta_iot_node                    SUCCESS   00:00:05.717
um_feathers2                      SUCCESS   00:00:05.228
um_feathers2_neo                  SUCCESS   00:00:05.202
um_feathers3                      SUCCESS   00:00:05.482
um_pros3                          SUCCESS   00:00:05.469
um_rmp                            SUCCESS   00:00:05.274
tinypico                          SUCCESS   00:00:05.728
um_tinys2                         SUCCESS   00:00:05.284
um_tinys3                         SUCCESS   00:00:05.514
vintlabs-devkit-v1                SUCCESS   00:00:05.712
wemos_d1_mini32                   SUCCESS   00:00:05.744
d1                                SUCCESS   00:00:04.509
wemos_d1_uno32                    SUCCESS   00:00:05.709
lolin_c3_mini                     SUCCESS   00:00:03.795
lolin_d32                         SUCCESS   00:00:05.794
lolin_d32_pro                     SUCCESS   00:00:05.896
lolin_s2_mini                     SUCCESS   00:00:05.323
lolin_s2_pico                     SUCCESS   00:00:05.263
lolin_s3                          SUCCESS   00:00:05.363
lolin32                           SUCCESS   00:00:05.824
lolin32_lite                      SUCCESS   00:00:05.753
d1_mini                           SUCCESS   00:00:04.591
d1_mini_lite                      SUCCESS   00:00:04.544
d1_mini_pro                       SUCCESS   00:00:04.490
wemosbat                          SUCCESS   00:00:05.787
wifi_slot                         SUCCESS   00:00:04.527
wifiduino                         SUCCESS   00:00:04.523
widora-air                        SUCCESS   00:00:05.723
wifinfo                           SUCCESS   00:00:04.542
wio_link                          SUCCESS   00:00:04.567
wio_node                          SUCCESS   00:00:04.554
wt32-eth01                        SUCCESS   00:00:05.766
xinabox_cw01                      SUCCESS   00:00:04.619
xinabox_cw02                      SUCCESS   00:00:05.724
nscreen-32                        SUCCESS   00:00:05.712
micros2                           SUCCESS   00:00:05.252
iotbusio                          SUCCESS   00:00:06.101
iotbusproteus                     SUCCESS   00:00:05.710
nina_w10                          SUCCESS   00:00:05.804
upesy_wroom                       SUCCESS   00:00:05.727
upesy_wrover                      SUCCESS   00:00:05.704
unphone7                          SUCCESS   00:00:05.746
unphone8                          SUCCESS   00:00:05.474
unphone9                          SUCCESS   00:00:05.382
```

`pio boards --json-output | jq -c '.[] | select(.mcu|contains("AVR")) | .id' | xargs printf -- '--board\0%s\0' | tr '\n' '\0' | xargs -0 env PLATFORMIO_BUILD_FLAGS=-DCI_BUILD pio ci --project-option="lib_ignore=CrashMonitor" tests/sketches/arduino/arduino.cpp`

```bash
Environment         Status    Duration
------------------  --------  ------------
btatmega168         FAILED    00:00:01.201
btatmega328         SUCCESS   00:00:01.208
due                 FAILED    00:00:01.371
dueUSB              FAILED    00:00:01.312
diecimilaatmega168  FAILED    00:00:01.192
diecimilaatmega328  SUCCESS   00:00:01.203
esplora             SUCCESS   00:00:01.239
ethernet            SUCCESS   00:00:01.184
fio                 SUCCESS   00:00:01.186
chiwawa             SUCCESS   00:00:01.255
leonardo            SUCCESS   00:00:01.238
leonardoeth         SUCCESS   00:00:01.228
lilypadatmega168    FAILED    00:00:01.185
lilypadatmega328    SUCCESS   00:00:01.180
LilyPadUSB          SUCCESS   00:00:01.248
mzeroUSB            FAILED    00:00:01.305
mzeroproUSB         FAILED    00:00:01.343
mzeropro            FAILED    00:00:01.321
mkrfox1200          FAILED    00:00:01.326
mkrgsm1400          FAILED    00:00:01.291
mkrnb1500           FAILED    00:00:01.325
mkrwan1300          FAILED    00:00:01.356
mkrwan1310          FAILED    00:00:01.741
mkrwifi1010         FAILED    00:00:01.321
mkr1000USB          FAILED    00:00:01.337
mkrzero             FAILED    00:00:01.391
megaADK             SUCCESS   00:00:01.187
megaatmega1280      SUCCESS   00:00:01.199
megaatmega2560      SUCCESS   00:00:01.193
micro               SUCCESS   00:00:01.273
miniatmega168       FAILED    00:00:01.219
miniatmega328       SUCCESS   00:00:01.207
atmegangatmega168   FAILED    00:00:01.207
atmegangatmega8     FAILED    00:00:01.201
nano33ble           FAILED    00:00:04.974
nanoatmega168       FAILED    00:00:01.230
nanoatmega328       SUCCESS   00:00:01.232
nanoatmega328new    SUCCESS   00:00:01.202
nano_every          FAILED    00:00:00.642
nanorp2040connect   FAILED    00:00:03.089
nicla_sense_me      FAILED    00:00:04.807
portenta_h7_m4      FAILED    00:00:03.511
portenta_h7_m7      FAILED    00:00:03.523
pro8MHzatmega168    FAILED    00:00:01.196
pro16MHzatmega168   FAILED    00:00:01.181
pro8MHzatmega328    SUCCESS   00:00:01.228
pro16MHzatmega328   SUCCESS   00:00:01.216
robotControl        SUCCESS   00:00:01.260
robotMotor          SUCCESS   00:00:01.248
tian                FAILED    00:00:01.362
uno                 SUCCESS   00:00:01.199
uno_wifi_rev2       FAILED    00:00:00.665
yun                 SUCCESS   00:00:01.257
yunmini             SUCCESS   00:00:01.248
zero                FAILED    00:00:01.308
zeroUSB             FAILED    00:00:01.324
genuino101          FAILED    00:00:00.857
```