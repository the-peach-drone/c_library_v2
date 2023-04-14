#pragma once
// MESSAGE COMMAND_INT PACKING

#define MAVLINK_MSG_ID_COMMAND_INT 75


typedef struct __mavlink_command_int_t {
 float param1; /*<  PARAM1, see MAV_CMD enum*/
 float param2; /*<  PARAM2, see MAV_CMD enum*/
 float param3; /*<  PARAM3, see MAV_CMD enum*/
 float param4; /*<  PARAM4, see MAV_CMD enum*/
 int32_t x; /*<  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
 int32_t y; /*<  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7*/
 float z; /*<  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).*/
 uint16_t command; /*<  The scheduled action for the mission item.*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t frame; /*<  The coordinate system of the COMMAND.*/
 uint8_t current; /*<  Not used.*/
 uint8_t autocontinue; /*<  Not used (set 0).*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_command_int_t;

#define MAVLINK_MSG_ID_COMMAND_INT_LEN 55
#define MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN 35
#define MAVLINK_MSG_ID_75_LEN 55
#define MAVLINK_MSG_ID_75_MIN_LEN 35

#define MAVLINK_MSG_ID_COMMAND_INT_CRC 158
#define MAVLINK_MSG_ID_75_CRC 158

#define MAVLINK_MSG_COMMAND_INT_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND_INT { \
    75, \
    "COMMAND_INT", \
    18, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_int_t, target_component) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_command_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_command_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_int_t, z) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_command_int_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_command_int_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_command_int_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_command_int_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 39, offsetof(mavlink_command_int_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND_INT { \
    "COMMAND_INT", \
    18, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_int_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_int_t, target_component) }, \
         { "frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_int_t, frame) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_int_t, command) }, \
         { "current", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_int_t, current) }, \
         { "autocontinue", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_int_t, autocontinue) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_int_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_int_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_int_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_int_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_command_int_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_command_int_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_int_t, z) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_command_int_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_command_int_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_command_int_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_command_int_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 39, offsetof(mavlink_command_int_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a command_int message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param frame  The coordinate system of the COMMAND.
 * @param command  The scheduled action for the mission item.
 * @param current  Not used.
 * @param autocontinue  Not used (set 0).
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, frame);
    _mav_put_uint8_t(buf, 33, current);
    _mav_put_uint8_t(buf, 34, autocontinue);
    _mav_put_uint8_t(buf, 35, kcmvp_alg);
    _mav_put_uint8_t(buf, 36, kcmvp_mode);
    _mav_put_uint8_t(buf, 37, kcmvp_key);
    _mav_put_uint8_t(buf, 38, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 39, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_INT_LEN);
#else
    mavlink_command_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_INT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
}

/**
 * @brief Pack a command_int message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param frame  The coordinate system of the COMMAND.
 * @param command  The scheduled action for the mission item.
 * @param current  Not used.
 * @param autocontinue  Not used (set 0).
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_int_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t frame,uint16_t command,uint8_t current,uint8_t autocontinue,float param1,float param2,float param3,float param4,int32_t x,int32_t y,float z,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, frame);
    _mav_put_uint8_t(buf, 33, current);
    _mav_put_uint8_t(buf, 34, autocontinue);
    _mav_put_uint8_t(buf, 35, kcmvp_alg);
    _mav_put_uint8_t(buf, 36, kcmvp_mode);
    _mav_put_uint8_t(buf, 37, kcmvp_key);
    _mav_put_uint8_t(buf, 38, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 39, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_INT_LEN);
#else
    mavlink_command_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_INT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_INT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
}

/**
 * @brief Encode a command_int struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_int_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_int_t* command_int)
{
    return mavlink_msg_command_int_pack(system_id, component_id, msg, command_int->target_system, command_int->target_component, command_int->frame, command_int->command, command_int->current, command_int->autocontinue, command_int->param1, command_int->param2, command_int->param3, command_int->param4, command_int->x, command_int->y, command_int->z, command_int->kcmvp_alg, command_int->kcmvp_mode, command_int->kcmvp_key, command_int->kcmvp_key_index, command_int->kcmvp_iv);
}

/**
 * @brief Encode a command_int struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_int C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_int_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_int_t* command_int)
{
    return mavlink_msg_command_int_pack_chan(system_id, component_id, chan, msg, command_int->target_system, command_int->target_component, command_int->frame, command_int->command, command_int->current, command_int->autocontinue, command_int->param1, command_int->param2, command_int->param3, command_int->param4, command_int->x, command_int->y, command_int->z, command_int->kcmvp_alg, command_int->kcmvp_mode, command_int->kcmvp_key, command_int->kcmvp_key_index, command_int->kcmvp_iv);
}

/**
 * @brief Send a command_int message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param frame  The coordinate system of the COMMAND.
 * @param command  The scheduled action for the mission item.
 * @param current  Not used.
 * @param autocontinue  Not used (set 0).
 * @param param1  PARAM1, see MAV_CMD enum
 * @param param2  PARAM2, see MAV_CMD enum
 * @param param3  PARAM3, see MAV_CMD enum
 * @param param4  PARAM4, see MAV_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_int_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_INT_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, frame);
    _mav_put_uint8_t(buf, 33, current);
    _mav_put_uint8_t(buf, 34, autocontinue);
    _mav_put_uint8_t(buf, 35, kcmvp_alg);
    _mav_put_uint8_t(buf, 36, kcmvp_mode);
    _mav_put_uint8_t(buf, 37, kcmvp_key);
    _mav_put_uint8_t(buf, 38, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 39, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_INT, buf, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
#else
    mavlink_command_int_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.frame = frame;
    packet.current = current;
    packet.autocontinue = autocontinue;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_INT, (const char *)&packet, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
#endif
}

/**
 * @brief Send a command_int message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_command_int_send_struct(mavlink_channel_t chan, const mavlink_command_int_t* command_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_command_int_send(chan, command_int->target_system, command_int->target_component, command_int->frame, command_int->command, command_int->current, command_int->autocontinue, command_int->param1, command_int->param2, command_int->param3, command_int->param4, command_int->x, command_int->y, command_int->z, command_int->kcmvp_alg, command_int->kcmvp_mode, command_int->kcmvp_key, command_int->kcmvp_key_index, command_int->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_INT, (const char *)command_int, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
#endif
}

#if MAVLINK_MSG_ID_COMMAND_INT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_command_int_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t frame, uint16_t command, uint8_t current, uint8_t autocontinue, float param1, float param2, float param3, float param4, int32_t x, int32_t y, float z, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_int32_t(buf, 16, x);
    _mav_put_int32_t(buf, 20, y);
    _mav_put_float(buf, 24, z);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, frame);
    _mav_put_uint8_t(buf, 33, current);
    _mav_put_uint8_t(buf, 34, autocontinue);
    _mav_put_uint8_t(buf, 35, kcmvp_alg);
    _mav_put_uint8_t(buf, 36, kcmvp_mode);
    _mav_put_uint8_t(buf, 37, kcmvp_key);
    _mav_put_uint8_t(buf, 38, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 39, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_INT, buf, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
#else
    mavlink_command_int_t *packet = (mavlink_command_int_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->command = command;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->frame = frame;
    packet->current = current;
    packet->autocontinue = autocontinue;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_INT, (const char *)packet, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND_INT UNPACKING


/**
 * @brief Get field target_system from command_int message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_command_int_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field target_component from command_int message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_command_int_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field frame from command_int message
 *
 * @return  The coordinate system of the COMMAND.
 */
static inline uint8_t mavlink_msg_command_int_get_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field command from command_int message
 *
 * @return  The scheduled action for the mission item.
 */
static inline uint16_t mavlink_msg_command_int_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field current from command_int message
 *
 * @return  Not used.
 */
static inline uint8_t mavlink_msg_command_int_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field autocontinue from command_int message
 *
 * @return  Not used (set 0).
 */
static inline uint8_t mavlink_msg_command_int_get_autocontinue(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field param1 from command_int message
 *
 * @return  PARAM1, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from command_int message
 *
 * @return  PARAM2, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from command_int message
 *
 * @return  PARAM3, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from command_int message
 *
 * @return  PARAM4, see MAV_CMD enum
 */
static inline float mavlink_msg_command_int_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field x from command_int message
 *
 * @return  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_command_int_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field y from command_int message
 *
 * @return  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_command_int_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field z from command_int message
 *
 * @return  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 */
static inline float mavlink_msg_command_int_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field kcmvp_alg from command_int message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_command_int_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field kcmvp_mode from command_int message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_command_int_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field kcmvp_key from command_int message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_command_int_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field kcmvp_key_index from command_int message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_command_int_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field kcmvp_iv from command_int message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_command_int_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  39);
}

/**
 * @brief Decode a command_int message into a struct
 *
 * @param msg The message to decode
 * @param command_int C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_int_decode(const mavlink_message_t* msg, mavlink_command_int_t* command_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    command_int->param1 = mavlink_msg_command_int_get_param1(msg);
    command_int->param2 = mavlink_msg_command_int_get_param2(msg);
    command_int->param3 = mavlink_msg_command_int_get_param3(msg);
    command_int->param4 = mavlink_msg_command_int_get_param4(msg);
    command_int->x = mavlink_msg_command_int_get_x(msg);
    command_int->y = mavlink_msg_command_int_get_y(msg);
    command_int->z = mavlink_msg_command_int_get_z(msg);
    command_int->command = mavlink_msg_command_int_get_command(msg);
    command_int->target_system = mavlink_msg_command_int_get_target_system(msg);
    command_int->target_component = mavlink_msg_command_int_get_target_component(msg);
    command_int->frame = mavlink_msg_command_int_get_frame(msg);
    command_int->current = mavlink_msg_command_int_get_current(msg);
    command_int->autocontinue = mavlink_msg_command_int_get_autocontinue(msg);
    command_int->kcmvp_alg = mavlink_msg_command_int_get_kcmvp_alg(msg);
    command_int->kcmvp_mode = mavlink_msg_command_int_get_kcmvp_mode(msg);
    command_int->kcmvp_key = mavlink_msg_command_int_get_kcmvp_key(msg);
    command_int->kcmvp_key_index = mavlink_msg_command_int_get_kcmvp_key_index(msg);
    mavlink_msg_command_int_get_kcmvp_iv(msg, command_int->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_INT_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_INT_LEN;
        memset(command_int, 0, MAVLINK_MSG_ID_COMMAND_INT_LEN);
    memcpy(command_int, _MAV_PAYLOAD(msg), len);
#endif
}
