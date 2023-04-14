#pragma once
// MESSAGE COMMAND_LONG PACKING

#define MAVLINK_MSG_ID_COMMAND_LONG 76


typedef struct __mavlink_command_long_t {
 float param1; /*<  Parameter 1 (for the specific command).*/
 float param2; /*<  Parameter 2 (for the specific command).*/
 float param3; /*<  Parameter 3 (for the specific command).*/
 float param4; /*<  Parameter 4 (for the specific command).*/
 float param5; /*<  Parameter 5 (for the specific command).*/
 float param6; /*<  Parameter 6 (for the specific command).*/
 float param7; /*<  Parameter 7 (for the specific command).*/
 uint16_t command; /*<  Command ID (of command to send).*/
 uint8_t target_system; /*<  System which should execute the command*/
 uint8_t target_component; /*<  Component which should execute the command, 0 for all components*/
 uint8_t confirmation; /*<  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_command_long_t;

#define MAVLINK_MSG_ID_COMMAND_LONG_LEN 53
#define MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN 33
#define MAVLINK_MSG_ID_76_LEN 53
#define MAVLINK_MSG_ID_76_MIN_LEN 33

#define MAVLINK_MSG_ID_COMMAND_LONG_CRC 152
#define MAVLINK_MSG_ID_76_CRC 152

#define MAVLINK_MSG_COMMAND_LONG_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND_LONG { \
    76, \
    "COMMAND_LONG", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_long_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_long_t, target_component) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_long_t, command) }, \
         { "confirmation", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_long_t, confirmation) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_long_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_long_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_long_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_long_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_command_long_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_command_long_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_long_t, param7) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_long_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_long_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_command_long_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_command_long_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 37, offsetof(mavlink_command_long_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND_LONG { \
    "COMMAND_LONG", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_command_long_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_command_long_t, target_component) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_command_long_t, command) }, \
         { "confirmation", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_command_long_t, confirmation) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_command_long_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_command_long_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_command_long_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_command_long_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_command_long_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_command_long_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_command_long_t, param7) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_command_long_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_command_long_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_command_long_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_command_long_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 37, offsetof(mavlink_command_long_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a command_long message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param command  Command ID (of command to send).
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter 1 (for the specific command).
 * @param param2  Parameter 2 (for the specific command).
 * @param param3  Parameter 3 (for the specific command).
 * @param param4  Parameter 4 (for the specific command).
 * @param param5  Parameter 5 (for the specific command).
 * @param param6  Parameter 6 (for the specific command).
 * @param param7  Parameter 7 (for the specific command).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_long_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t command, uint8_t confirmation, float param1, float param2, float param3, float param4, float param5, float param6, float param7, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LONG_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, confirmation);
    _mav_put_uint8_t(buf, 33, kcmvp_alg);
    _mav_put_uint8_t(buf, 34, kcmvp_mode);
    _mav_put_uint8_t(buf, 35, kcmvp_key);
    _mav_put_uint8_t(buf, 36, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 37, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
#else
    mavlink_command_long_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_LONG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
}

/**
 * @brief Pack a command_long message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param command  Command ID (of command to send).
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter 1 (for the specific command).
 * @param param2  Parameter 2 (for the specific command).
 * @param param3  Parameter 3 (for the specific command).
 * @param param4  Parameter 4 (for the specific command).
 * @param param5  Parameter 5 (for the specific command).
 * @param param6  Parameter 6 (for the specific command).
 * @param param7  Parameter 7 (for the specific command).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_long_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t command,uint8_t confirmation,float param1,float param2,float param3,float param4,float param5,float param6,float param7,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LONG_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, confirmation);
    _mav_put_uint8_t(buf, 33, kcmvp_alg);
    _mav_put_uint8_t(buf, 34, kcmvp_mode);
    _mav_put_uint8_t(buf, 35, kcmvp_key);
    _mav_put_uint8_t(buf, 36, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 37, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
#else
    mavlink_command_long_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_LONG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
}

/**
 * @brief Encode a command_long struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command_long C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_long_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_long_t* command_long)
{
    return mavlink_msg_command_long_pack(system_id, component_id, msg, command_long->target_system, command_long->target_component, command_long->command, command_long->confirmation, command_long->param1, command_long->param2, command_long->param3, command_long->param4, command_long->param5, command_long->param6, command_long->param7, command_long->kcmvp_alg, command_long->kcmvp_mode, command_long->kcmvp_key, command_long->kcmvp_key_index, command_long->kcmvp_iv);
}

/**
 * @brief Encode a command_long struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_long C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_long_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_long_t* command_long)
{
    return mavlink_msg_command_long_pack_chan(system_id, component_id, chan, msg, command_long->target_system, command_long->target_component, command_long->command, command_long->confirmation, command_long->param1, command_long->param2, command_long->param3, command_long->param4, command_long->param5, command_long->param6, command_long->param7, command_long->kcmvp_alg, command_long->kcmvp_mode, command_long->kcmvp_key, command_long->kcmvp_key_index, command_long->kcmvp_iv);
}

/**
 * @brief Send a command_long message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System which should execute the command
 * @param target_component  Component which should execute the command, 0 for all components
 * @param command  Command ID (of command to send).
 * @param confirmation  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 * @param param1  Parameter 1 (for the specific command).
 * @param param2  Parameter 2 (for the specific command).
 * @param param3  Parameter 3 (for the specific command).
 * @param param4  Parameter 4 (for the specific command).
 * @param param5  Parameter 5 (for the specific command).
 * @param param6  Parameter 6 (for the specific command).
 * @param param7  Parameter 7 (for the specific command).
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_long_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t command, uint8_t confirmation, float param1, float param2, float param3, float param4, float param5, float param6, float param7, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_LONG_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, confirmation);
    _mav_put_uint8_t(buf, 33, kcmvp_alg);
    _mav_put_uint8_t(buf, 34, kcmvp_mode);
    _mav_put_uint8_t(buf, 35, kcmvp_key);
    _mav_put_uint8_t(buf, 36, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 37, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_LONG, buf, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
#else
    mavlink_command_long_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.confirmation = confirmation;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_LONG, (const char *)&packet, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
#endif
}

/**
 * @brief Send a command_long message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_command_long_send_struct(mavlink_channel_t chan, const mavlink_command_long_t* command_long)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_command_long_send(chan, command_long->target_system, command_long->target_component, command_long->command, command_long->confirmation, command_long->param1, command_long->param2, command_long->param3, command_long->param4, command_long->param5, command_long->param6, command_long->param7, command_long->kcmvp_alg, command_long->kcmvp_mode, command_long->kcmvp_key, command_long->kcmvp_key_index, command_long->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_LONG, (const char *)command_long, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
#endif
}

#if MAVLINK_MSG_ID_COMMAND_LONG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_command_long_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t command, uint8_t confirmation, float param1, float param2, float param3, float param4, float param5, float param6, float param7, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);
    _mav_put_uint8_t(buf, 30, target_system);
    _mav_put_uint8_t(buf, 31, target_component);
    _mav_put_uint8_t(buf, 32, confirmation);
    _mav_put_uint8_t(buf, 33, kcmvp_alg);
    _mav_put_uint8_t(buf, 34, kcmvp_mode);
    _mav_put_uint8_t(buf, 35, kcmvp_key);
    _mav_put_uint8_t(buf, 36, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 37, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_LONG, buf, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
#else
    mavlink_command_long_t *packet = (mavlink_command_long_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->command = command;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->confirmation = confirmation;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_LONG, (const char *)packet, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND_LONG UNPACKING


/**
 * @brief Get field target_system from command_long message
 *
 * @return  System which should execute the command
 */
static inline uint8_t mavlink_msg_command_long_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field target_component from command_long message
 *
 * @return  Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_command_long_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field command from command_long message
 *
 * @return  Command ID (of command to send).
 */
static inline uint16_t mavlink_msg_command_long_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field confirmation from command_long message
 *
 * @return  0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
 */
static inline uint8_t mavlink_msg_command_long_get_confirmation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field param1 from command_long message
 *
 * @return  Parameter 1 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from command_long message
 *
 * @return  Parameter 2 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from command_long message
 *
 * @return  Parameter 3 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from command_long message
 *
 * @return  Parameter 4 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param5 from command_long message
 *
 * @return  Parameter 5 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param6 from command_long message
 *
 * @return  Parameter 6 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field param7 from command_long message
 *
 * @return  Parameter 7 (for the specific command).
 */
static inline float mavlink_msg_command_long_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field kcmvp_alg from command_long message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_command_long_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field kcmvp_mode from command_long message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_command_long_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field kcmvp_key from command_long message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_command_long_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field kcmvp_key_index from command_long message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_command_long_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field kcmvp_iv from command_long message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_command_long_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  37);
}

/**
 * @brief Decode a command_long message into a struct
 *
 * @param msg The message to decode
 * @param command_long C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_long_decode(const mavlink_message_t* msg, mavlink_command_long_t* command_long)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    command_long->param1 = mavlink_msg_command_long_get_param1(msg);
    command_long->param2 = mavlink_msg_command_long_get_param2(msg);
    command_long->param3 = mavlink_msg_command_long_get_param3(msg);
    command_long->param4 = mavlink_msg_command_long_get_param4(msg);
    command_long->param5 = mavlink_msg_command_long_get_param5(msg);
    command_long->param6 = mavlink_msg_command_long_get_param6(msg);
    command_long->param7 = mavlink_msg_command_long_get_param7(msg);
    command_long->command = mavlink_msg_command_long_get_command(msg);
    command_long->target_system = mavlink_msg_command_long_get_target_system(msg);
    command_long->target_component = mavlink_msg_command_long_get_target_component(msg);
    command_long->confirmation = mavlink_msg_command_long_get_confirmation(msg);
    command_long->kcmvp_alg = mavlink_msg_command_long_get_kcmvp_alg(msg);
    command_long->kcmvp_mode = mavlink_msg_command_long_get_kcmvp_mode(msg);
    command_long->kcmvp_key = mavlink_msg_command_long_get_kcmvp_key(msg);
    command_long->kcmvp_key_index = mavlink_msg_command_long_get_kcmvp_key_index(msg);
    mavlink_msg_command_long_get_kcmvp_iv(msg, command_long->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_LONG_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_LONG_LEN;
        memset(command_long, 0, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
    memcpy(command_long, _MAV_PAYLOAD(msg), len);
#endif
}
