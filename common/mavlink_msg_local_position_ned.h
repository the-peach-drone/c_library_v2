#pragma once
// MESSAGE LOCAL_POSITION_NED PACKING

#define MAVLINK_MSG_ID_LOCAL_POSITION_NED 32


typedef struct __mavlink_local_position_ned_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float x; /*< [m] X Position*/
 float y; /*< [m] Y Position*/
 float z; /*< [m] Z Position*/
 float vx; /*< [m/s] X Speed*/
 float vy; /*< [m/s] Y Speed*/
 float vz; /*< [m/s] Z Speed*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_local_position_ned_t;

#define MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN 48
#define MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN 28
#define MAVLINK_MSG_ID_32_LEN 48
#define MAVLINK_MSG_ID_32_MIN_LEN 28

#define MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC 185
#define MAVLINK_MSG_ID_32_CRC 185

#define MAVLINK_MSG_LOCAL_POSITION_NED_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED { \
    32, \
    "LOCAL_POSITION_NED", \
    12, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_local_position_ned_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_local_position_ned_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_local_position_ned_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_local_position_ned_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_local_position_ned_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_local_position_ned_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_local_position_ned_t, vz) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_local_position_ned_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_local_position_ned_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_local_position_ned_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_local_position_ned_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 32, offsetof(mavlink_local_position_ned_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED { \
    "LOCAL_POSITION_NED", \
    12, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_local_position_ned_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_local_position_ned_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_local_position_ned_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_local_position_ned_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_local_position_ned_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_local_position_ned_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_local_position_ned_t, vz) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_local_position_ned_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_local_position_ned_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_local_position_ned_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_local_position_ned_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 32, offsetof(mavlink_local_position_ned_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a local_position_ned message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param z [m] Z Position
 * @param vx [m/s] X Speed
 * @param vy [m/s] Y Speed
 * @param vz [m/s] Z Speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_local_position_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
#else
    mavlink_local_position_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOCAL_POSITION_NED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
}

/**
 * @brief Pack a local_position_ned message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param z [m] Z Position
 * @param vx [m/s] X Speed
 * @param vy [m/s] Y Speed
 * @param vz [m/s] Z Speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_local_position_ned_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float x,float y,float z,float vx,float vy,float vz,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
#else
    mavlink_local_position_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LOCAL_POSITION_NED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
}

/**
 * @brief Encode a local_position_ned struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param local_position_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_local_position_ned_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_local_position_ned_t* local_position_ned)
{
    return mavlink_msg_local_position_ned_pack(system_id, component_id, msg, local_position_ned->time_boot_ms, local_position_ned->x, local_position_ned->y, local_position_ned->z, local_position_ned->vx, local_position_ned->vy, local_position_ned->vz, local_position_ned->kcmvp_alg, local_position_ned->kcmvp_mode, local_position_ned->kcmvp_key, local_position_ned->kcmvp_key_index, local_position_ned->kcmvp_iv);
}

/**
 * @brief Encode a local_position_ned struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param local_position_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_local_position_ned_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_local_position_ned_t* local_position_ned)
{
    return mavlink_msg_local_position_ned_pack_chan(system_id, component_id, chan, msg, local_position_ned->time_boot_ms, local_position_ned->x, local_position_ned->y, local_position_ned->z, local_position_ned->vx, local_position_ned->vy, local_position_ned->vz, local_position_ned->kcmvp_alg, local_position_ned->kcmvp_mode, local_position_ned->kcmvp_key, local_position_ned->kcmvp_key_index, local_position_ned->kcmvp_iv);
}

/**
 * @brief Send a local_position_ned message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param x [m] X Position
 * @param y [m] Y Position
 * @param z [m] Z Position
 * @param vx [m/s] X Speed
 * @param vy [m/s] Y Speed
 * @param vz [m/s] Z Speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_local_position_ned_send(mavlink_channel_t chan, uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED, buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
#else
    mavlink_local_position_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED, (const char *)&packet, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
#endif
}

/**
 * @brief Send a local_position_ned message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_local_position_ned_send_struct(mavlink_channel_t chan, const mavlink_local_position_ned_t* local_position_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_local_position_ned_send(chan, local_position_ned->time_boot_ms, local_position_ned->x, local_position_ned->y, local_position_ned->z, local_position_ned->vx, local_position_ned->vy, local_position_ned->vz, local_position_ned->kcmvp_alg, local_position_ned->kcmvp_mode, local_position_ned->kcmvp_key, local_position_ned->kcmvp_key_index, local_position_ned->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED, (const char *)local_position_ned, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
#endif
}

#if MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_local_position_ned_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED, buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
#else
    mavlink_local_position_ned_t *packet = (mavlink_local_position_ned_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LOCAL_POSITION_NED, (const char *)packet, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);
#endif
}
#endif

#endif

// MESSAGE LOCAL_POSITION_NED UNPACKING


/**
 * @brief Get field time_boot_ms from local_position_ned message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_local_position_ned_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field x from local_position_ned message
 *
 * @return [m] X Position
 */
static inline float mavlink_msg_local_position_ned_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from local_position_ned message
 *
 * @return [m] Y Position
 */
static inline float mavlink_msg_local_position_ned_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field z from local_position_ned message
 *
 * @return [m] Z Position
 */
static inline float mavlink_msg_local_position_ned_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vx from local_position_ned message
 *
 * @return [m/s] X Speed
 */
static inline float mavlink_msg_local_position_ned_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vy from local_position_ned message
 *
 * @return [m/s] Y Speed
 */
static inline float mavlink_msg_local_position_ned_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vz from local_position_ned message
 *
 * @return [m/s] Z Speed
 */
static inline float mavlink_msg_local_position_ned_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field kcmvp_alg from local_position_ned message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_local_position_ned_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field kcmvp_mode from local_position_ned message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_local_position_ned_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field kcmvp_key from local_position_ned message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_local_position_ned_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field kcmvp_key_index from local_position_ned message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_local_position_ned_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field kcmvp_iv from local_position_ned message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_local_position_ned_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  32);
}

/**
 * @brief Decode a local_position_ned message into a struct
 *
 * @param msg The message to decode
 * @param local_position_ned C-struct to decode the message contents into
 */
static inline void mavlink_msg_local_position_ned_decode(const mavlink_message_t* msg, mavlink_local_position_ned_t* local_position_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    local_position_ned->time_boot_ms = mavlink_msg_local_position_ned_get_time_boot_ms(msg);
    local_position_ned->x = mavlink_msg_local_position_ned_get_x(msg);
    local_position_ned->y = mavlink_msg_local_position_ned_get_y(msg);
    local_position_ned->z = mavlink_msg_local_position_ned_get_z(msg);
    local_position_ned->vx = mavlink_msg_local_position_ned_get_vx(msg);
    local_position_ned->vy = mavlink_msg_local_position_ned_get_vy(msg);
    local_position_ned->vz = mavlink_msg_local_position_ned_get_vz(msg);
    local_position_ned->kcmvp_alg = mavlink_msg_local_position_ned_get_kcmvp_alg(msg);
    local_position_ned->kcmvp_mode = mavlink_msg_local_position_ned_get_kcmvp_mode(msg);
    local_position_ned->kcmvp_key = mavlink_msg_local_position_ned_get_kcmvp_key(msg);
    local_position_ned->kcmvp_key_index = mavlink_msg_local_position_ned_get_kcmvp_key_index(msg);
    mavlink_msg_local_position_ned_get_kcmvp_iv(msg, local_position_ned->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN? msg->len : MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN;
        memset(local_position_ned, 0, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
    memcpy(local_position_ned, _MAV_PAYLOAD(msg), len);
#endif
}
