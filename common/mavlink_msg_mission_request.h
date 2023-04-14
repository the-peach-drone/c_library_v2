#pragma once
// MESSAGE MISSION_REQUEST PACKING

#define MAVLINK_MSG_ID_MISSION_REQUEST 40


typedef struct __mavlink_mission_request_t {
 uint16_t seq; /*<  Sequence*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t mission_type; /*<  Mission type.*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t kcmvp_iv[16]; /*<  Initializer Vector*/
} mavlink_mission_request_t;

#define MAVLINK_MSG_ID_MISSION_REQUEST_LEN 25
#define MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN 4
#define MAVLINK_MSG_ID_40_LEN 25
#define MAVLINK_MSG_ID_40_MIN_LEN 4

#define MAVLINK_MSG_ID_MISSION_REQUEST_CRC 230
#define MAVLINK_MSG_ID_40_CRC 230

#define MAVLINK_MSG_MISSION_REQUEST_FIELD_KCMVP_IV_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MISSION_REQUEST { \
    40, \
    "MISSION_REQUEST", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mission_request_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mission_request_t, target_component) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mission_request_t, seq) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mission_request_t, mission_type) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mission_request_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mission_request_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_mission_request_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mission_request_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 9, offsetof(mavlink_mission_request_t, kcmvp_iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MISSION_REQUEST { \
    "MISSION_REQUEST", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_mission_request_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_mission_request_t, target_component) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_mission_request_t, seq) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mission_request_t, mission_type) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mission_request_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mission_request_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_mission_request_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mission_request_t, kcmvp_key_index) }, \
         { "kcmvp_iv", NULL, MAVLINK_TYPE_UINT8_T, 16, 9, offsetof(mavlink_mission_request_t, kcmvp_iv) }, \
         } \
}
#endif

/**
 * @brief Pack a mission_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Sequence
 * @param mission_type  Mission type.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t mission_type, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, seq);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, kcmvp_alg);
    _mav_put_uint8_t(buf, 6, kcmvp_mode);
    _mav_put_uint8_t(buf, 7, kcmvp_key);
    _mav_put_uint8_t(buf, 8, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 9, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
#else
    mavlink_mission_request_t packet;
    packet.seq = seq;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
}

/**
 * @brief Pack a mission_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Sequence
 * @param mission_type  Mission type.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint16_t seq,uint8_t mission_type,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, seq);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, kcmvp_alg);
    _mav_put_uint8_t(buf, 6, kcmvp_mode);
    _mav_put_uint8_t(buf, 7, kcmvp_key);
    _mav_put_uint8_t(buf, 8, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 9, kcmvp_iv, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
#else
    mavlink_mission_request_t packet;
    packet.seq = seq;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
}

/**
 * @brief Encode a mission_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mission_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mission_request_t* mission_request)
{
    return mavlink_msg_mission_request_pack(system_id, component_id, msg, mission_request->target_system, mission_request->target_component, mission_request->seq, mission_request->mission_type, mission_request->kcmvp_alg, mission_request->kcmvp_mode, mission_request->kcmvp_key, mission_request->kcmvp_key_index, mission_request->kcmvp_iv);
}

/**
 * @brief Encode a mission_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mission_request_t* mission_request)
{
    return mavlink_msg_mission_request_pack_chan(system_id, component_id, chan, msg, mission_request->target_system, mission_request->target_component, mission_request->seq, mission_request->mission_type, mission_request->kcmvp_alg, mission_request->kcmvp_mode, mission_request->kcmvp_key, mission_request->kcmvp_key_index, mission_request->kcmvp_iv);
}

/**
 * @brief Send a mission_request message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param seq  Sequence
 * @param mission_type  Mission type.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param kcmvp_iv  Initializer Vector
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mission_request_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t mission_type, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, seq);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, kcmvp_alg);
    _mav_put_uint8_t(buf, 6, kcmvp_mode);
    _mav_put_uint8_t(buf, 7, kcmvp_key);
    _mav_put_uint8_t(buf, 8, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 9, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_REQUEST, buf, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
#else
    mavlink_mission_request_t packet;
    packet.seq = seq;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mission_type = mission_type;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
#endif
}

/**
 * @brief Send a mission_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mission_request_send_struct(mavlink_channel_t chan, const mavlink_mission_request_t* mission_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mission_request_send(chan, mission_request->target_system, mission_request->target_component, mission_request->seq, mission_request->mission_type, mission_request->kcmvp_alg, mission_request->kcmvp_mode, mission_request->kcmvp_key, mission_request->kcmvp_key_index, mission_request->kcmvp_iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_REQUEST, (const char *)mission_request, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_MISSION_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mission_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint16_t seq, uint8_t mission_type, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *kcmvp_iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, seq);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);
    _mav_put_uint8_t(buf, 4, mission_type);
    _mav_put_uint8_t(buf, 5, kcmvp_alg);
    _mav_put_uint8_t(buf, 6, kcmvp_mode);
    _mav_put_uint8_t(buf, 7, kcmvp_key);
    _mav_put_uint8_t(buf, 8, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 9, kcmvp_iv, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_REQUEST, buf, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
#else
    mavlink_mission_request_t *packet = (mavlink_mission_request_t *)msgbuf;
    packet->seq = seq;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->mission_type = mission_type;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->kcmvp_iv, kcmvp_iv, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_REQUEST, (const char *)packet, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE MISSION_REQUEST UNPACKING


/**
 * @brief Get field target_system from mission_request message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_mission_request_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_component from mission_request message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_mission_request_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field seq from mission_request message
 *
 * @return  Sequence
 */
static inline uint16_t mavlink_msg_mission_request_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field mission_type from mission_request message
 *
 * @return  Mission type.
 */
static inline uint8_t mavlink_msg_mission_request_get_mission_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field kcmvp_alg from mission_request message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_mission_request_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field kcmvp_mode from mission_request message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_mission_request_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field kcmvp_key from mission_request message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_mission_request_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field kcmvp_key_index from mission_request message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_mission_request_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field kcmvp_iv from mission_request message
 *
 * @return  Initializer Vector
 */
static inline uint16_t mavlink_msg_mission_request_get_kcmvp_iv(const mavlink_message_t* msg, uint8_t *kcmvp_iv)
{
    return _MAV_RETURN_uint8_t_array(msg, kcmvp_iv, 16,  9);
}

/**
 * @brief Decode a mission_request message into a struct
 *
 * @param msg The message to decode
 * @param mission_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_mission_request_decode(const mavlink_message_t* msg, mavlink_mission_request_t* mission_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mission_request->seq = mavlink_msg_mission_request_get_seq(msg);
    mission_request->target_system = mavlink_msg_mission_request_get_target_system(msg);
    mission_request->target_component = mavlink_msg_mission_request_get_target_component(msg);
    mission_request->mission_type = mavlink_msg_mission_request_get_mission_type(msg);
    mission_request->kcmvp_alg = mavlink_msg_mission_request_get_kcmvp_alg(msg);
    mission_request->kcmvp_mode = mavlink_msg_mission_request_get_kcmvp_mode(msg);
    mission_request->kcmvp_key = mavlink_msg_mission_request_get_kcmvp_key(msg);
    mission_request->kcmvp_key_index = mavlink_msg_mission_request_get_kcmvp_key_index(msg);
    mavlink_msg_mission_request_get_kcmvp_iv(msg, mission_request->kcmvp_iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MISSION_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_MISSION_REQUEST_LEN;
        memset(mission_request, 0, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
    memcpy(mission_request, _MAV_PAYLOAD(msg), len);
#endif
}
