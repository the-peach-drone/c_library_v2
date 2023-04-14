#pragma once
// MESSAGE COMMAND_ACK PACKING

#define MAVLINK_MSG_ID_COMMAND_ACK 77


typedef struct __mavlink_command_ack_t {
 uint16_t command; /*<  Command ID (of acknowledged command).*/
 uint8_t result; /*<  Result of command.*/
 uint8_t progress; /*<  Also used as result_param1, it can be set with an enum containing the errors reasons of why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (UINT8_MAX if the progress is unknown).*/
 int32_t result_param2; /*<  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.*/
 uint8_t target_system; /*<  System ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.*/
 uint8_t target_component; /*<  Component ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_command_ack_t;

#define MAVLINK_MSG_ID_COMMAND_ACK_LEN 30
#define MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN 3
#define MAVLINK_MSG_ID_77_LEN 30
#define MAVLINK_MSG_ID_77_MIN_LEN 3

#define MAVLINK_MSG_ID_COMMAND_ACK_CRC 143
#define MAVLINK_MSG_ID_77_CRC 143

#define MAVLINK_MSG_COMMAND_ACK_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_COMMAND_ACK { \
    77, \
    "COMMAND_ACK", \
    11, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_command_ack_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_command_ack_t, result) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_command_ack_t, progress) }, \
         { "result_param2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_command_ack_t, result_param2) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_ack_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_command_ack_t, target_component) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_command_ack_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_command_ack_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_command_ack_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_command_ack_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 14, offsetof(mavlink_command_ack_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_COMMAND_ACK { \
    "COMMAND_ACK", \
    11, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_command_ack_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_command_ack_t, result) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_command_ack_t, progress) }, \
         { "result_param2", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_command_ack_t, result_param2) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_command_ack_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_command_ack_t, target_component) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_command_ack_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_command_ack_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_command_ack_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_command_ack_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 14, offsetof(mavlink_command_ack_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a command_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Command ID (of acknowledged command).
 * @param result  Result of command.
 * @param progress  Also used as result_param1, it can be set with an enum containing the errors reasons of why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (UINT8_MAX if the progress is unknown).
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param target_component  Component ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, kcmvp_alg);
    _mav_put_uint8_t(buf, 11, kcmvp_mode);
    _mav_put_uint8_t(buf, 12, kcmvp_key);
    _mav_put_uint8_t(buf, 13, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 14, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
#else
    mavlink_command_ack_t packet;
    packet.command = command;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
}

/**
 * @brief Pack a command_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  Command ID (of acknowledged command).
 * @param result  Result of command.
 * @param progress  Also used as result_param1, it can be set with an enum containing the errors reasons of why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (UINT8_MAX if the progress is unknown).
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param target_component  Component ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_command_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint8_t result,uint8_t progress,int32_t result_param2,uint8_t target_system,uint8_t target_component,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, kcmvp_alg);
    _mav_put_uint8_t(buf, 11, kcmvp_mode);
    _mav_put_uint8_t(buf, 12, kcmvp_key);
    _mav_put_uint8_t(buf, 13, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 14, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
#else
    mavlink_command_ack_t packet;
    packet.command = command;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_COMMAND_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
}

/**
 * @brief Encode a command_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param command_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_command_ack_t* command_ack)
{
    return mavlink_msg_command_ack_pack(system_id, component_id, msg, command_ack->command, command_ack->result, command_ack->progress, command_ack->result_param2, command_ack->target_system, command_ack->target_component, command_ack->kcmvp_alg, command_ack->kcmvp_mode, command_ack->kcmvp_key, command_ack->kcmvp_key_index, command_ack->kcmvp_iv);
}

/**
 * @brief Encode a command_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_command_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_command_ack_t* command_ack)
{
    return mavlink_msg_command_ack_pack_chan(system_id, component_id, chan, msg, command_ack->command, command_ack->result, command_ack->progress, command_ack->result_param2, command_ack->target_system, command_ack->target_component, command_ack->kcmvp_alg, command_ack->kcmvp_mode, command_ack->kcmvp_key, command_ack->kcmvp_key_index, command_ack->kcmvp_iv);
}

/**
 * @brief Send a command_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param command  Command ID (of acknowledged command).
 * @param result  Result of command.
 * @param progress  Also used as result_param1, it can be set with an enum containing the errors reasons of why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (UINT8_MAX if the progress is unknown).
 * @param result_param2  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 * @param target_system  System ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param target_component  Component ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_command_ack_send(mavlink_channel_t chan, uint16_t command, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_COMMAND_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, kcmvp_alg);
    _mav_put_uint8_t(buf, 11, kcmvp_mode);
    _mav_put_uint8_t(buf, 12, kcmvp_key);
    _mav_put_uint8_t(buf, 13, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 14, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_ACK, buf, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
#else
    mavlink_command_ack_t packet;
    packet.command = command;
    packet.result = result;
    packet.progress = progress;
    packet.result_param2 = result_param2;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_ACK, (const char *)&packet, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
#endif
}

/**
 * @brief Send a command_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_command_ack_send_struct(mavlink_channel_t chan, const mavlink_command_ack_t* command_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_command_ack_send(chan, command_ack->command, command_ack->result, command_ack->progress, command_ack->result_param2, command_ack->target_system, command_ack->target_component, command_ack->kcmvp_alg, command_ack->kcmvp_mode, command_ack->kcmvp_key, command_ack->kcmvp_key_index, command_ack->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_ACK, (const char *)command_ack, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_COMMAND_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_command_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint8_t result, uint8_t progress, int32_t result_param2, uint8_t target_system, uint8_t target_component, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);
    _mav_put_uint8_t(buf, 3, progress);
    _mav_put_int32_t(buf, 4, result_param2);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);
    _mav_put_uint8_t(buf, 10, kcmvp_alg);
    _mav_put_uint8_t(buf, 11, kcmvp_mode);
    _mav_put_uint8_t(buf, 12, kcmvp_key);
    _mav_put_uint8_t(buf, 13, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 14, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_ACK, buf, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
#else
    mavlink_command_ack_t *packet = (mavlink_command_ack_t *)msgbuf;
    packet->command = command;
    packet->result = result;
    packet->progress = progress;
    packet->result_param2 = result_param2;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_COMMAND_ACK, (const char *)packet, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE COMMAND_ACK UNPACKING


/**
 * @brief Get field command from command_ack message
 *
 * @return  Command ID (of acknowledged command).
 */
static inline uint16_t mavlink_msg_command_ack_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field result from command_ack message
 *
 * @return  Result of command.
 */
static inline uint8_t mavlink_msg_command_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field progress from command_ack message
 *
 * @return  Also used as result_param1, it can be set with an enum containing the errors reasons of why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS (UINT8_MAX if the progress is unknown).
 */
static inline uint8_t mavlink_msg_command_ack_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field result_param2 from command_ack message
 *
 * @return  Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
 */
static inline int32_t mavlink_msg_command_ack_get_result_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field target_system from command_ack message
 *
 * @return  System ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 */
static inline uint8_t mavlink_msg_command_ack_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from command_ack message
 *
 * @return  Component ID of the target recipient. This is the ID of the system that sent the command for which this COMMAND_ACK is an acknowledgement.
 */
static inline uint8_t mavlink_msg_command_ack_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field kcmvp_alg from command_ack message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_command_ack_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field kcmvp_mode from command_ack message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_command_ack_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field kcmvp_key from command_ack message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_command_ack_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field kcmvp_key_index from command_ack message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_command_ack_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field kcmvp_iv from command_ack message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_command_ack_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  14);
}

/**
 * @brief Decode a command_ack message into a struct
 *
 * @param msg The message to decode
 * @param command_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_command_ack_decode(const mavlink_message_t* msg, mavlink_command_ack_t* command_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    command_ack->command = mavlink_msg_command_ack_get_command(msg);
    command_ack->result = mavlink_msg_command_ack_get_result(msg);
    command_ack->progress = mavlink_msg_command_ack_get_progress(msg);
    command_ack->result_param2 = mavlink_msg_command_ack_get_result_param2(msg);
    command_ack->target_system = mavlink_msg_command_ack_get_target_system(msg);
    command_ack->target_component = mavlink_msg_command_ack_get_target_component(msg);
    command_ack->kcmvp_alg = mavlink_msg_command_ack_get_kcmvp_alg(msg);
    command_ack->kcmvp_mode = mavlink_msg_command_ack_get_kcmvp_mode(msg);
    command_ack->kcmvp_key = mavlink_msg_command_ack_get_kcmvp_key(msg);
    command_ack->kcmvp_key_index = mavlink_msg_command_ack_get_kcmvp_key_index(msg);
    mavlink_msg_command_ack_get_kcmvp_iv(msg, command_ack->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_COMMAND_ACK_LEN? msg->len : MAVLINK_MSG_ID_COMMAND_ACK_LEN;
        memset(command_ack, 0, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
    memcpy(command_ack, _MAV_PAYLOAD(msg), len);
#endif
}
