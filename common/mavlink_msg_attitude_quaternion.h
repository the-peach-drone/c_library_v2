#pragma once
// MESSAGE ATTITUDE_QUATERNION PACKING

#define MAVLINK_MSG_ID_ATTITUDE_QUATERNION 31


typedef struct __mavlink_attitude_quaternion_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float q1; /*<  Quaternion component 1, w (1 in null-rotation)*/
 float q2; /*<  Quaternion component 2, x (0 in null-rotation)*/
 float q3; /*<  Quaternion component 3, y (0 in null-rotation)*/
 float q4; /*<  Quaternion component 4, z (0 in null-rotation)*/
 float rollspeed; /*< [rad/s] Roll angular speed*/
 float pitchspeed; /*< [rad/s] Pitch angular speed*/
 float yawspeed; /*< [rad/s] Yaw angular speed*/
 float repr_offset_q[4]; /*<  Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_attitude_quaternion_t;

#define MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN 68
#define MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN 32
#define MAVLINK_MSG_ID_31_LEN 68
#define MAVLINK_MSG_ID_31_MIN_LEN 32

#define MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC 246
#define MAVLINK_MSG_ID_31_CRC 246

#define MAVLINK_MSG_ATTITUDE_QUATERNION_FIELD_REPR_OFFSET_Q_LEN 4
#define MAVLINK_MSG_ATTITUDE_QUATERNION_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION { \
    31, \
    "ATTITUDE_QUATERNION", \
    14, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_quaternion_t, time_boot_ms) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_quaternion_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_quaternion_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_quaternion_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_quaternion_t, q4) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_quaternion_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_quaternion_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_quaternion_t, yawspeed) }, \
         { "repr_offset_q", NULL, MAVLINK_TYPE_FLOAT, 4, 32, offsetof(mavlink_attitude_quaternion_t, repr_offset_q) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_attitude_quaternion_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_attitude_quaternion_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_attitude_quaternion_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_attitude_quaternion_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 52, offsetof(mavlink_attitude_quaternion_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION { \
    "ATTITUDE_QUATERNION", \
    14, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_attitude_quaternion_t, time_boot_ms) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_quaternion_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_quaternion_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_quaternion_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_attitude_quaternion_t, q4) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_attitude_quaternion_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_attitude_quaternion_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_attitude_quaternion_t, yawspeed) }, \
         { "repr_offset_q", NULL, MAVLINK_TYPE_FLOAT, 4, 32, offsetof(mavlink_attitude_quaternion_t, repr_offset_q) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_attitude_quaternion_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_attitude_quaternion_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_attitude_quaternion_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_attitude_quaternion_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 52, offsetof(mavlink_attitude_quaternion_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a attitude_quaternion message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param repr_offset_q  Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_quaternion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float q1, float q2, float q3, float q4, float rollspeed, float pitchspeed, float yawspeed, const float *repr_offset_q, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, q1);
    _mav_put_float(buf, 8, q2);
    _mav_put_float(buf, 12, q3);
    _mav_put_float(buf, 16, q4);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);
    _mav_put_uint8_t(buf, 48, kcmvp_alg);
    _mav_put_uint8_t(buf, 49, kcmvp_mode);
    _mav_put_uint8_t(buf, 50, kcmvp_key);
    _mav_put_uint8_t(buf, 51, kcmvp_key_index);
    _mav_put_float_array(buf, 32, repr_offset_q, 4);
    _mav_put_uint8_t_array(buf, 52, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
#else
    mavlink_attitude_quaternion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.repr_offset_q, repr_offset_q, sizeof(float)*4);
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE_QUATERNION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
}

/**
 * @brief Pack a attitude_quaternion message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param repr_offset_q  Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_quaternion_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float q1,float q2,float q3,float q4,float rollspeed,float pitchspeed,float yawspeed,const float *repr_offset_q,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, q1);
    _mav_put_float(buf, 8, q2);
    _mav_put_float(buf, 12, q3);
    _mav_put_float(buf, 16, q4);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);
    _mav_put_uint8_t(buf, 48, kcmvp_alg);
    _mav_put_uint8_t(buf, 49, kcmvp_mode);
    _mav_put_uint8_t(buf, 50, kcmvp_key);
    _mav_put_uint8_t(buf, 51, kcmvp_key_index);
    _mav_put_float_array(buf, 32, repr_offset_q, 4);
    _mav_put_uint8_t_array(buf, 52, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
#else
    mavlink_attitude_quaternion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.repr_offset_q, repr_offset_q, sizeof(float)*4);
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ATTITUDE_QUATERNION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
}

/**
 * @brief Encode a attitude_quaternion struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_quaternion_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_quaternion_t* attitude_quaternion)
{
    return mavlink_msg_attitude_quaternion_pack(system_id, component_id, msg, attitude_quaternion->time_boot_ms, attitude_quaternion->q1, attitude_quaternion->q2, attitude_quaternion->q3, attitude_quaternion->q4, attitude_quaternion->rollspeed, attitude_quaternion->pitchspeed, attitude_quaternion->yawspeed, attitude_quaternion->repr_offset_q, attitude_quaternion->kcmvp_alg, attitude_quaternion->kcmvp_mode, attitude_quaternion->kcmvp_key, attitude_quaternion->kcmvp_key_index, attitude_quaternion->kcmvp_iv);
}

/**
 * @brief Encode a attitude_quaternion struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param attitude_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_quaternion_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_attitude_quaternion_t* attitude_quaternion)
{
    return mavlink_msg_attitude_quaternion_pack_chan(system_id, component_id, chan, msg, attitude_quaternion->time_boot_ms, attitude_quaternion->q1, attitude_quaternion->q2, attitude_quaternion->q3, attitude_quaternion->q4, attitude_quaternion->rollspeed, attitude_quaternion->pitchspeed, attitude_quaternion->yawspeed, attitude_quaternion->repr_offset_q, attitude_quaternion->kcmvp_alg, attitude_quaternion->kcmvp_mode, attitude_quaternion->kcmvp_key, attitude_quaternion->kcmvp_key_index, attitude_quaternion->kcmvp_iv);
}

/**
 * @brief Send a attitude_quaternion message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param repr_offset_q  Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_quaternion_send(mavlink_channel_t chan, uint32_t time_boot_ms, float q1, float q2, float q3, float q4, float rollspeed, float pitchspeed, float yawspeed, const float *repr_offset_q, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, q1);
    _mav_put_float(buf, 8, q2);
    _mav_put_float(buf, 12, q3);
    _mav_put_float(buf, 16, q4);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);
    _mav_put_uint8_t(buf, 48, kcmvp_alg);
    _mav_put_uint8_t(buf, 49, kcmvp_mode);
    _mav_put_uint8_t(buf, 50, kcmvp_key);
    _mav_put_uint8_t(buf, 51, kcmvp_key_index);
    _mav_put_float_array(buf, 32, repr_offset_q, 4);
    _mav_put_uint8_t_array(buf, 52, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION, buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
#else
    mavlink_attitude_quaternion_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.repr_offset_q, repr_offset_q, sizeof(float)*4);
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
#endif
}

/**
 * @brief Send a attitude_quaternion message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_attitude_quaternion_send_struct(mavlink_channel_t chan, const mavlink_attitude_quaternion_t* attitude_quaternion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_attitude_quaternion_send(chan, attitude_quaternion->time_boot_ms, attitude_quaternion->q1, attitude_quaternion->q2, attitude_quaternion->q3, attitude_quaternion->q4, attitude_quaternion->rollspeed, attitude_quaternion->pitchspeed, attitude_quaternion->yawspeed, attitude_quaternion->repr_offset_q, attitude_quaternion->kcmvp_alg, attitude_quaternion->kcmvp_mode, attitude_quaternion->kcmvp_key, attitude_quaternion->kcmvp_key_index, attitude_quaternion->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION, (const char *)attitude_quaternion, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
#endif
}

#if MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_attitude_quaternion_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float q1, float q2, float q3, float q4, float rollspeed, float pitchspeed, float yawspeed, const float *repr_offset_q, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, q1);
    _mav_put_float(buf, 8, q2);
    _mav_put_float(buf, 12, q3);
    _mav_put_float(buf, 16, q4);
    _mav_put_float(buf, 20, rollspeed);
    _mav_put_float(buf, 24, pitchspeed);
    _mav_put_float(buf, 28, yawspeed);
    _mav_put_uint8_t(buf, 48, kcmvp_alg);
    _mav_put_uint8_t(buf, 49, kcmvp_mode);
    _mav_put_uint8_t(buf, 50, kcmvp_key);
    _mav_put_uint8_t(buf, 51, kcmvp_key_index);
    _mav_put_float_array(buf, 32, repr_offset_q, 4);
    _mav_put_uint8_t_array(buf, 52, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION, buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
#else
    mavlink_attitude_quaternion_t *packet = (mavlink_attitude_quaternion_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->q1 = q1;
    packet->q2 = q2;
    packet->q3 = q3;
    packet->q4 = q4;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->repr_offset_q, repr_offset_q, sizeof(float)*4);
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_QUATERNION, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);
#endif
}
#endif

#endif

// MESSAGE ATTITUDE_QUATERNION UNPACKING


/**
 * @brief Get field time_boot_ms from attitude_quaternion message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_attitude_quaternion_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field q1 from attitude_quaternion message
 *
 * @return  Quaternion component 1, w (1 in null-rotation)
 */
static inline float mavlink_msg_attitude_quaternion_get_q1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field q2 from attitude_quaternion message
 *
 * @return  Quaternion component 2, x (0 in null-rotation)
 */
static inline float mavlink_msg_attitude_quaternion_get_q2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field q3 from attitude_quaternion message
 *
 * @return  Quaternion component 3, y (0 in null-rotation)
 */
static inline float mavlink_msg_attitude_quaternion_get_q3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field q4 from attitude_quaternion message
 *
 * @return  Quaternion component 4, z (0 in null-rotation)
 */
static inline float mavlink_msg_attitude_quaternion_get_q4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rollspeed from attitude_quaternion message
 *
 * @return [rad/s] Roll angular speed
 */
static inline float mavlink_msg_attitude_quaternion_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitchspeed from attitude_quaternion message
 *
 * @return [rad/s] Pitch angular speed
 */
static inline float mavlink_msg_attitude_quaternion_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field yawspeed from attitude_quaternion message
 *
 * @return [rad/s] Yaw angular speed
 */
static inline float mavlink_msg_attitude_quaternion_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field repr_offset_q from attitude_quaternion message
 *
 * @return  Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.
 */
static inline uint16_t mavlink_msg_attitude_quaternion_get_repr_offset_q(const mavlink_message_t* msg, float *repr_offset_q)
{
    return _MAV_RETURN_float_array(msg, repr_offset_q, 4,  32);
}

/**
 * @brief Get field kcmvp_alg from attitude_quaternion message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_attitude_quaternion_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field kcmvp_mode from attitude_quaternion message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_attitude_quaternion_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  49);
}

/**
 * @brief Get field kcmvp_key from attitude_quaternion message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_attitude_quaternion_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  50);
}

/**
 * @brief Get field kcmvp_key_index from attitude_quaternion message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_attitude_quaternion_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  51);
}

/**
 * @brief Get field kcmvp_iv from attitude_quaternion message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_attitude_quaternion_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  52);
}

/**
 * @brief Decode a attitude_quaternion message into a struct
 *
 * @param msg The message to decode
 * @param attitude_quaternion C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_quaternion_decode(const mavlink_message_t* msg, mavlink_attitude_quaternion_t* attitude_quaternion)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    attitude_quaternion->time_boot_ms = mavlink_msg_attitude_quaternion_get_time_boot_ms(msg);
    attitude_quaternion->q1 = mavlink_msg_attitude_quaternion_get_q1(msg);
    attitude_quaternion->q2 = mavlink_msg_attitude_quaternion_get_q2(msg);
    attitude_quaternion->q3 = mavlink_msg_attitude_quaternion_get_q3(msg);
    attitude_quaternion->q4 = mavlink_msg_attitude_quaternion_get_q4(msg);
    attitude_quaternion->rollspeed = mavlink_msg_attitude_quaternion_get_rollspeed(msg);
    attitude_quaternion->pitchspeed = mavlink_msg_attitude_quaternion_get_pitchspeed(msg);
    attitude_quaternion->yawspeed = mavlink_msg_attitude_quaternion_get_yawspeed(msg);
    mavlink_msg_attitude_quaternion_get_repr_offset_q(msg, attitude_quaternion->repr_offset_q);
    attitude_quaternion->kcmvp_alg = mavlink_msg_attitude_quaternion_get_kcmvp_alg(msg);
    attitude_quaternion->kcmvp_mode = mavlink_msg_attitude_quaternion_get_kcmvp_mode(msg);
    attitude_quaternion->kcmvp_key = mavlink_msg_attitude_quaternion_get_kcmvp_key(msg);
    attitude_quaternion->kcmvp_key_index = mavlink_msg_attitude_quaternion_get_kcmvp_key_index(msg);
    mavlink_msg_attitude_quaternion_get_kcmvp_iv(msg, attitude_quaternion->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN? msg->len : MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN;
        memset(attitude_quaternion, 0, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
    memcpy(attitude_quaternion, _MAV_PAYLOAD(msg), len);
#endif
}
