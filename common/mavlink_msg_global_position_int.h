#pragma once
// MESSAGE GLOBAL_POSITION_INT PACKING

#define MAVLINK_MSG_ID_GLOBAL_POSITION_INT 33


typedef struct __mavlink_global_position_int_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 int32_t lat; /*< [degE7] Latitude, expressed*/
 int32_t lon; /*< [degE7] Longitude, expressed*/
 int32_t alt; /*< [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.*/
 int32_t relative_alt; /*< [mm] Altitude above ground*/
 int16_t vx; /*< [cm/s] Ground X Speed (Latitude, positive north)*/
 int16_t vy; /*< [cm/s] Ground Y Speed (Longitude, positive east)*/
 int16_t vz; /*< [cm/s] Ground Z Speed (Altitude, positive down)*/
 uint16_t hdg; /*< [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_global_position_int_t;

#define MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN 48
#define MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN 28
#define MAVLINK_MSG_ID_33_LEN 48
#define MAVLINK_MSG_ID_33_MIN_LEN 28

#define MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC 104
#define MAVLINK_MSG_ID_33_CRC 104

#define MAVLINK_MSG_GLOBAL_POSITION_INT_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT { \
    33, \
    "GLOBAL_POSITION_INT", \
    14, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_global_position_int_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_global_position_int_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_global_position_int_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_global_position_int_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_global_position_int_t, relative_alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_global_position_int_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_global_position_int_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_global_position_int_t, vz) }, \
         { "hdg", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_global_position_int_t, hdg) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_global_position_int_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_global_position_int_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_global_position_int_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_global_position_int_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 32, offsetof(mavlink_global_position_int_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT { \
    "GLOBAL_POSITION_INT", \
    14, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_global_position_int_t, time_boot_ms) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_global_position_int_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_global_position_int_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_global_position_int_t, alt) }, \
         { "relative_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_global_position_int_t, relative_alt) }, \
         { "vx", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_global_position_int_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_global_position_int_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_global_position_int_t, vz) }, \
         { "hdg", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_global_position_int_t, hdg) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_global_position_int_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_global_position_int_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_global_position_int_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_global_position_int_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 32, offsetof(mavlink_global_position_int_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a global_position_int message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param relative_alt [mm] Altitude above ground
 * @param vx [cm/s] Ground X Speed (Latitude, positive north)
 * @param vy [cm/s] Ground Y Speed (Longitude, positive east)
 * @param vz [cm/s] Ground Z Speed (Altitude, positive down)
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_global_position_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, int16_t vx, int16_t vy, int16_t vz, uint16_t hdg, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, relative_alt);
    _mav_put_int16_t(buf, 20, vx);
    _mav_put_int16_t(buf, 22, vy);
    _mav_put_int16_t(buf, 24, vz);
    _mav_put_uint16_t(buf, 26, hdg);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
#else
    mavlink_global_position_int_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.hdg = hdg;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_INT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
}

/**
 * @brief Pack a global_position_int message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param relative_alt [mm] Altitude above ground
 * @param vx [cm/s] Ground X Speed (Latitude, positive north)
 * @param vy [cm/s] Ground Y Speed (Longitude, positive east)
 * @param vz [cm/s] Ground Z Speed (Altitude, positive down)
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_global_position_int_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,int32_t lat,int32_t lon,int32_t alt,int32_t relative_alt,int16_t vx,int16_t vy,int16_t vz,uint16_t hdg,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, relative_alt);
    _mav_put_int16_t(buf, 20, vx);
    _mav_put_int16_t(buf, 22, vy);
    _mav_put_int16_t(buf, 24, vz);
    _mav_put_uint16_t(buf, 26, hdg);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
#else
    mavlink_global_position_int_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.hdg = hdg;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_INT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
}

/**
 * @brief Encode a global_position_int struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param global_position_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_global_position_int_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_global_position_int_t* global_position_int)
{
    return mavlink_msg_global_position_int_pack(system_id, component_id, msg, global_position_int->time_boot_ms, global_position_int->lat, global_position_int->lon, global_position_int->alt, global_position_int->relative_alt, global_position_int->vx, global_position_int->vy, global_position_int->vz, global_position_int->hdg, global_position_int->kcmvp_alg, global_position_int->kcmvp_mode, global_position_int->kcmvp_key, global_position_int->kcmvp_key_index, global_position_int->kcmvp_iv);
}

/**
 * @brief Encode a global_position_int struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param global_position_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_global_position_int_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_global_position_int_t* global_position_int)
{
    return mavlink_msg_global_position_int_pack_chan(system_id, component_id, chan, msg, global_position_int->time_boot_ms, global_position_int->lat, global_position_int->lon, global_position_int->alt, global_position_int->relative_alt, global_position_int->vx, global_position_int->vy, global_position_int->vz, global_position_int->hdg, global_position_int->kcmvp_alg, global_position_int->kcmvp_mode, global_position_int->kcmvp_key, global_position_int->kcmvp_key_index, global_position_int->kcmvp_iv);
}

/**
 * @brief Send a global_position_int message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param relative_alt [mm] Altitude above ground
 * @param vx [cm/s] Ground X Speed (Latitude, positive north)
 * @param vy [cm/s] Ground Y Speed (Longitude, positive east)
 * @param vz [cm/s] Ground Z Speed (Altitude, positive down)
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_global_position_int_send(mavlink_channel_t chan, uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, int16_t vx, int16_t vy, int16_t vz, uint16_t hdg, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, relative_alt);
    _mav_put_int16_t(buf, 20, vx);
    _mav_put_int16_t(buf, 22, vy);
    _mav_put_int16_t(buf, 24, vz);
    _mav_put_uint16_t(buf, 26, hdg);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT, buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
#else
    mavlink_global_position_int_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.relative_alt = relative_alt;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.hdg = hdg;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT, (const char *)&packet, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
#endif
}

/**
 * @brief Send a global_position_int message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_global_position_int_send_struct(mavlink_channel_t chan, const mavlink_global_position_int_t* global_position_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_global_position_int_send(chan, global_position_int->time_boot_ms, global_position_int->lat, global_position_int->lon, global_position_int->alt, global_position_int->relative_alt, global_position_int->vx, global_position_int->vy, global_position_int->vz, global_position_int->hdg, global_position_int->kcmvp_alg, global_position_int->kcmvp_mode, global_position_int->kcmvp_key, global_position_int->kcmvp_key_index, global_position_int->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT, (const char *)global_position_int, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
#endif
}

#if MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_global_position_int_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, int32_t lat, int32_t lon, int32_t alt, int32_t relative_alt, int16_t vx, int16_t vy, int16_t vz, uint16_t hdg, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, alt);
    _mav_put_int32_t(buf, 16, relative_alt);
    _mav_put_int16_t(buf, 20, vx);
    _mav_put_int16_t(buf, 22, vy);
    _mav_put_int16_t(buf, 24, vz);
    _mav_put_uint16_t(buf, 26, hdg);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT, buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
#else
    mavlink_global_position_int_t *packet = (mavlink_global_position_int_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->relative_alt = relative_alt;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->hdg = hdg;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GLOBAL_POSITION_INT, (const char *)packet, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);
#endif
}
#endif

#endif

// MESSAGE GLOBAL_POSITION_INT UNPACKING


/**
 * @brief Get field time_boot_ms from global_position_int message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_global_position_int_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from global_position_int message
 *
 * @return [degE7] Latitude, expressed
 */
static inline int32_t mavlink_msg_global_position_int_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from global_position_int message
 *
 * @return [degE7] Longitude, expressed
 */
static inline int32_t mavlink_msg_global_position_int_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field alt from global_position_int message
 *
 * @return [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 */
static inline int32_t mavlink_msg_global_position_int_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field relative_alt from global_position_int message
 *
 * @return [mm] Altitude above ground
 */
static inline int32_t mavlink_msg_global_position_int_get_relative_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field vx from global_position_int message
 *
 * @return [cm/s] Ground X Speed (Latitude, positive north)
 */
static inline int16_t mavlink_msg_global_position_int_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field vy from global_position_int message
 *
 * @return [cm/s] Ground Y Speed (Longitude, positive east)
 */
static inline int16_t mavlink_msg_global_position_int_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field vz from global_position_int message
 *
 * @return [cm/s] Ground Z Speed (Altitude, positive down)
 */
static inline int16_t mavlink_msg_global_position_int_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field hdg from global_position_int message
 *
 * @return [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_global_position_int_get_hdg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field kcmvp_alg from global_position_int message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_global_position_int_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field kcmvp_mode from global_position_int message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_global_position_int_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field kcmvp_key from global_position_int message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_global_position_int_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field kcmvp_key_index from global_position_int message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_global_position_int_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field kcmvp_iv from global_position_int message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_global_position_int_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  32);
}

/**
 * @brief Decode a global_position_int message into a struct
 *
 * @param msg The message to decode
 * @param global_position_int C-struct to decode the message contents into
 */
static inline void mavlink_msg_global_position_int_decode(const mavlink_message_t* msg, mavlink_global_position_int_t* global_position_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    global_position_int->time_boot_ms = mavlink_msg_global_position_int_get_time_boot_ms(msg);
    global_position_int->lat = mavlink_msg_global_position_int_get_lat(msg);
    global_position_int->lon = mavlink_msg_global_position_int_get_lon(msg);
    global_position_int->alt = mavlink_msg_global_position_int_get_alt(msg);
    global_position_int->relative_alt = mavlink_msg_global_position_int_get_relative_alt(msg);
    global_position_int->vx = mavlink_msg_global_position_int_get_vx(msg);
    global_position_int->vy = mavlink_msg_global_position_int_get_vy(msg);
    global_position_int->vz = mavlink_msg_global_position_int_get_vz(msg);
    global_position_int->hdg = mavlink_msg_global_position_int_get_hdg(msg);
    global_position_int->kcmvp_alg = mavlink_msg_global_position_int_get_kcmvp_alg(msg);
    global_position_int->kcmvp_mode = mavlink_msg_global_position_int_get_kcmvp_mode(msg);
    global_position_int->kcmvp_key = mavlink_msg_global_position_int_get_kcmvp_key(msg);
    global_position_int->kcmvp_key_index = mavlink_msg_global_position_int_get_kcmvp_key_index(msg);
    mavlink_msg_global_position_int_get_kcmvp_iv(msg, global_position_int->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN? msg->len : MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN;
        memset(global_position_int, 0, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
    memcpy(global_position_int, _MAV_PAYLOAD(msg), len);
#endif
}
