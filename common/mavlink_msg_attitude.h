#pragma once
// MESSAGE ATTITUDE PACKING

#define MAVLINK_MSG_ID_ATTITUDE 30


typedef struct __mavlink_attitude_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float roll; /*< [rad] Roll angle (-pi..+pi)*/
 float pitch; /*< [rad] Pitch angle (-pi..+pi)*/
 float yaw; /*< [rad] Yaw angle (-pi..+pi)*/
 float rollspeed; /*< [rad/s] Roll angular speed*/
 float pitchspeed; /*< [rad/s] Pitch angular speed*/
 float yawspeed; /*< [rad/s] Yaw angular speed*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t ctr[2]; /*<  ctr used by ctr mode.*/
 uint8_t iv[2]; /*<  initial vector used by cbc mode.*/
} mavlink_attitude_t;

#define MAVLINK_MSG_ID_ATTITUDE_LEN 36
#define MAVLINK_MSG_ID_ATTITUDE_MIN_LEN 28
#define MAVLINK_MSG_ID_30_LEN 36
#define MAVLINK_MSG_ID_30_MIN_LEN 28

#define MAVLINK_MSG_ID_ATTITUDE_CRC 39
#define MAVLINK_MSG_ID_30_CRC 39

#define MAVLINK_MSG_ATTITUDE_FIELD_CTR_LEN 2
#define MAVLINK_MSG_ATTITUDE_FIELD_IV_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ATTITUDE { \
    30, \
    "ATTITUDE", \
    13, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_t, yawspeed) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_attitude_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_attitude_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_attitude_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_attitude_t, kcmvp_key_index) }, \
         { "ctr", NULL, MAVLINK_TYPE_UINT8_T, 2, 32, offsetof(mavlink_attitude_t, ctr) }, \
         { "iv", NULL, MAVLINK_TYPE_UINT8_T, 2, 34, offsetof(mavlink_attitude_t, iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ATTITUDE { \
    "ATTITUDE", \
    13, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_t, yawspeed) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_attitude_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_attitude_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_attitude_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_attitude_t, kcmvp_key_index) }, \
         { "ctr", NULL, MAVLINK_TYPE_UINT8_T, 2, 32, offsetof(mavlink_attitude_t, ctr) }, \
         { "iv", NULL, MAVLINK_TYPE_UINT8_T, 2, 34, offsetof(mavlink_attitude_t, iv) }, \
         } \
}
#endif

/**
 * @brief Pack a attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, rollspeed);
    _mav_put_float(buf, 20, pitchspeed);
    _mav_put_float(buf, 24, yawspeed);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, ctr, 2);
    _mav_put_uint8_t_array(buf, 34, iv, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_LEN);
#else
    mavlink_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
}

/**
 * @brief Pack a attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *ctr,const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, rollspeed);
    _mav_put_float(buf, 20, pitchspeed);
    _mav_put_float(buf, 24, yawspeed);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, ctr, 2);
    _mav_put_uint8_t_array(buf, 34, iv, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_LEN);
#else
    mavlink_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
}

/**
 * @brief Encode a attitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_t* attitude)
{
    return mavlink_msg_attitude_pack(system_id, component_id, msg, attitude->time_boot_ms, attitude->roll, attitude->pitch, attitude->yaw, attitude->rollspeed, attitude->pitchspeed, attitude->yawspeed, attitude->kcmvp_alg, attitude->kcmvp_mode, attitude->kcmvp_key, attitude->kcmvp_key_index, attitude->ctr, attitude->iv);
}

/**
 * @brief Encode a attitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_attitude_t* attitude)
{
    return mavlink_msg_attitude_pack_chan(system_id, component_id, chan, msg, attitude->time_boot_ms, attitude->roll, attitude->pitch, attitude->yaw, attitude->rollspeed, attitude->pitchspeed, attitude->yawspeed, attitude->kcmvp_alg, attitude->kcmvp_mode, attitude->kcmvp_key, attitude->kcmvp_key_index, attitude->ctr, attitude->iv);
}

/**
 * @brief Send a attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_send(mavlink_channel_t chan, uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, rollspeed);
    _mav_put_float(buf, 20, pitchspeed);
    _mav_put_float(buf, 24, yawspeed);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, ctr, 2);
    _mav_put_uint8_t_array(buf, 34, iv, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE, buf, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
#else
    mavlink_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
#endif
}

/**
 * @brief Send a attitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_attitude_send_struct(mavlink_channel_t chan, const mavlink_attitude_t* attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_attitude_send(chan, attitude->time_boot_ms, attitude->roll, attitude->pitch, attitude->yaw, attitude->rollspeed, attitude->pitchspeed, attitude->yawspeed, attitude->kcmvp_alg, attitude->kcmvp_mode, attitude->kcmvp_key, attitude->kcmvp_key_index, attitude->ctr, attitude->iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE, (const char *)attitude, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ATTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_attitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_float(buf, 16, rollspeed);
    _mav_put_float(buf, 20, pitchspeed);
    _mav_put_float(buf, 24, yawspeed);
    _mav_put_uint8_t(buf, 28, kcmvp_alg);
    _mav_put_uint8_t(buf, 29, kcmvp_mode);
    _mav_put_uint8_t(buf, 30, kcmvp_key);
    _mav_put_uint8_t(buf, 31, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 32, ctr, 2);
    _mav_put_uint8_t_array(buf, 34, iv, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE, buf, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
#else
    mavlink_attitude_t *packet = (mavlink_attitude_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet->iv, iv, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE ATTITUDE UNPACKING


/**
 * @brief Get field time_boot_ms from attitude message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_attitude_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll from attitude message
 *
 * @return [rad] Roll angle (-pi..+pi)
 */
static inline float mavlink_msg_attitude_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from attitude message
 *
 * @return [rad] Pitch angle (-pi..+pi)
 */
static inline float mavlink_msg_attitude_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from attitude message
 *
 * @return [rad] Yaw angle (-pi..+pi)
 */
static inline float mavlink_msg_attitude_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rollspeed from attitude message
 *
 * @return [rad/s] Roll angular speed
 */
static inline float mavlink_msg_attitude_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field pitchspeed from attitude message
 *
 * @return [rad/s] Pitch angular speed
 */
static inline float mavlink_msg_attitude_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field yawspeed from attitude message
 *
 * @return [rad/s] Yaw angular speed
 */
static inline float mavlink_msg_attitude_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field kcmvp_alg from attitude message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_attitude_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field kcmvp_mode from attitude message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_attitude_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field kcmvp_key from attitude message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_attitude_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field kcmvp_key_index from attitude message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_attitude_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field ctr from attitude message
 *
 * @return  ctr used by ctr mode.
 */
static inline uint16_t mavlink_msg_attitude_get_ctr(const mavlink_message_t* msg, uint8_t *ctr)
{
    return _MAV_RETURN_uint8_t_array(msg, ctr, 2,  32);
}

/**
 * @brief Get field iv from attitude message
 *
 * @return  initial vector used by cbc mode.
 */
static inline uint16_t mavlink_msg_attitude_get_iv(const mavlink_message_t* msg, uint8_t *iv)
{
    return _MAV_RETURN_uint8_t_array(msg, iv, 2,  34);
}

/**
 * @brief Decode a attitude message into a struct
 *
 * @param msg The message to decode
 * @param attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_decode(const mavlink_message_t* msg, mavlink_attitude_t* attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    attitude->time_boot_ms = mavlink_msg_attitude_get_time_boot_ms(msg);
    attitude->roll = mavlink_msg_attitude_get_roll(msg);
    attitude->pitch = mavlink_msg_attitude_get_pitch(msg);
    attitude->yaw = mavlink_msg_attitude_get_yaw(msg);
    attitude->rollspeed = mavlink_msg_attitude_get_rollspeed(msg);
    attitude->pitchspeed = mavlink_msg_attitude_get_pitchspeed(msg);
    attitude->yawspeed = mavlink_msg_attitude_get_yawspeed(msg);
    attitude->kcmvp_alg = mavlink_msg_attitude_get_kcmvp_alg(msg);
    attitude->kcmvp_mode = mavlink_msg_attitude_get_kcmvp_mode(msg);
    attitude->kcmvp_key = mavlink_msg_attitude_get_kcmvp_key(msg);
    attitude->kcmvp_key_index = mavlink_msg_attitude_get_kcmvp_key_index(msg);
    mavlink_msg_attitude_get_ctr(msg, attitude->ctr);
    mavlink_msg_attitude_get_iv(msg, attitude->iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ATTITUDE_LEN? msg->len : MAVLINK_MSG_ID_ATTITUDE_LEN;
        memset(attitude, 0, MAVLINK_MSG_ID_ATTITUDE_LEN);
    memcpy(attitude, _MAV_PAYLOAD(msg), len);
#endif
}
