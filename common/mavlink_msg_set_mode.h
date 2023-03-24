#pragma once
// MESSAGE SET_MODE PACKING

#define MAVLINK_MSG_ID_SET_MODE 11


typedef struct __mavlink_set_mode_t {
 uint32_t custom_mode; /*<  The new autopilot-specific mode. This field can be ignored by an autopilot.*/
 uint8_t target_system; /*<  The system setting the mode*/
 uint8_t base_mode; /*<  The new base mode.*/
 uint8_t kcmvp_alg; /*<  KCMVP algorithm.*/
 uint8_t kcmvp_mode; /*<  KCMVP Mode.*/
 uint8_t kcmvp_key; /*<  KCMVP Key.*/
 uint8_t kcmvp_key_index; /*<  KCMVP Key index.*/
 uint8_t ctr[2]; /*<  ctr used by ctr mode.*/
 uint8_t iv[2]; /*<  initial vector used by cbc mode.*/
} mavlink_set_mode_t;

#define MAVLINK_MSG_ID_SET_MODE_LEN 14
#define MAVLINK_MSG_ID_SET_MODE_MIN_LEN 6
#define MAVLINK_MSG_ID_11_LEN 14
#define MAVLINK_MSG_ID_11_MIN_LEN 6

#define MAVLINK_MSG_ID_SET_MODE_CRC 89
#define MAVLINK_MSG_ID_11_CRC 89

#define MAVLINK_MSG_SET_MODE_FIELD_CTR_LEN 2
#define MAVLINK_MSG_SET_MODE_FIELD_IV_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_MODE { \
    11, \
    "SET_MODE", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_set_mode_t, target_system) }, \
         { "base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_set_mode_t, base_mode) }, \
         { "custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_mode_t, custom_mode) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_set_mode_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_set_mode_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_set_mode_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_set_mode_t, kcmvp_key_index) }, \
         { "ctr", NULL, MAVLINK_TYPE_UINT8_T, 2, 10, offsetof(mavlink_set_mode_t, ctr) }, \
         { "iv", NULL, MAVLINK_TYPE_UINT8_T, 2, 12, offsetof(mavlink_set_mode_t, iv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_MODE { \
    "SET_MODE", \
    9, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_set_mode_t, target_system) }, \
         { "base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_set_mode_t, base_mode) }, \
         { "custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_mode_t, custom_mode) }, \
         { "kcmvp_alg", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_set_mode_t, kcmvp_alg) }, \
         { "kcmvp_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_set_mode_t, kcmvp_mode) }, \
         { "kcmvp_key", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_set_mode_t, kcmvp_key) }, \
         { "kcmvp_key_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_set_mode_t, kcmvp_key_index) }, \
         { "ctr", NULL, MAVLINK_TYPE_UINT8_T, 2, 10, offsetof(mavlink_set_mode_t, ctr) }, \
         { "iv", NULL, MAVLINK_TYPE_UINT8_T, 2, 12, offsetof(mavlink_set_mode_t, iv) }, \
         } \
}
#endif

/**
 * @brief Pack a set_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system setting the mode
 * @param base_mode  The new base mode.
 * @param custom_mode  The new autopilot-specific mode. This field can be ignored by an autopilot.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t base_mode, uint32_t custom_mode, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_MODE_LEN];
    _mav_put_uint32_t(buf, 0, custom_mode);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, base_mode);
    _mav_put_uint8_t(buf, 6, kcmvp_alg);
    _mav_put_uint8_t(buf, 7, kcmvp_mode);
    _mav_put_uint8_t(buf, 8, kcmvp_key);
    _mav_put_uint8_t(buf, 9, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 10, ctr, 2);
    _mav_put_uint8_t_array(buf, 12, iv, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_MODE_LEN);
#else
    mavlink_set_mode_t packet;
    packet.custom_mode = custom_mode;
    packet.target_system = target_system;
    packet.base_mode = base_mode;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
}

/**
 * @brief Pack a set_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system setting the mode
 * @param base_mode  The new base mode.
 * @param custom_mode  The new autopilot-specific mode. This field can be ignored by an autopilot.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t base_mode,uint32_t custom_mode,uint8_t kcmvp_alg,uint8_t kcmvp_mode,uint8_t kcmvp_key,uint8_t kcmvp_key_index,const uint8_t *ctr,const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_MODE_LEN];
    _mav_put_uint32_t(buf, 0, custom_mode);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, base_mode);
    _mav_put_uint8_t(buf, 6, kcmvp_alg);
    _mav_put_uint8_t(buf, 7, kcmvp_mode);
    _mav_put_uint8_t(buf, 8, kcmvp_key);
    _mav_put_uint8_t(buf, 9, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 10, ctr, 2);
    _mav_put_uint8_t_array(buf, 12, iv, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_MODE_LEN);
#else
    mavlink_set_mode_t packet;
    packet.custom_mode = custom_mode;
    packet.target_system = target_system;
    packet.base_mode = base_mode;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
}

/**
 * @brief Encode a set_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_mode_t* set_mode)
{
    return mavlink_msg_set_mode_pack(system_id, component_id, msg, set_mode->target_system, set_mode->base_mode, set_mode->custom_mode, set_mode->kcmvp_alg, set_mode->kcmvp_mode, set_mode->kcmvp_key, set_mode->kcmvp_key_index, set_mode->ctr, set_mode->iv);
}

/**
 * @brief Encode a set_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_mode_t* set_mode)
{
    return mavlink_msg_set_mode_pack_chan(system_id, component_id, chan, msg, set_mode->target_system, set_mode->base_mode, set_mode->custom_mode, set_mode->kcmvp_alg, set_mode->kcmvp_mode, set_mode->kcmvp_key, set_mode->kcmvp_key_index, set_mode->ctr, set_mode->iv);
}

/**
 * @brief Send a set_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system setting the mode
 * @param base_mode  The new base mode.
 * @param custom_mode  The new autopilot-specific mode. This field can be ignored by an autopilot.
 * @param kcmvp_alg  KCMVP algorithm.
 * @param kcmvp_mode  KCMVP Mode.
 * @param kcmvp_key  KCMVP Key.
 * @param kcmvp_key_index  KCMVP Key index.
 * @param ctr  ctr used by ctr mode.
 * @param iv  initial vector used by cbc mode.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_mode_send(mavlink_channel_t chan, uint8_t target_system, uint8_t base_mode, uint32_t custom_mode, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_MODE_LEN];
    _mav_put_uint32_t(buf, 0, custom_mode);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, base_mode);
    _mav_put_uint8_t(buf, 6, kcmvp_alg);
    _mav_put_uint8_t(buf, 7, kcmvp_mode);
    _mav_put_uint8_t(buf, 8, kcmvp_key);
    _mav_put_uint8_t(buf, 9, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 10, ctr, 2);
    _mav_put_uint8_t_array(buf, 12, iv, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_MODE, buf, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
#else
    mavlink_set_mode_t packet;
    packet.custom_mode = custom_mode;
    packet.target_system = target_system;
    packet.base_mode = base_mode;
    packet.kcmvp_alg = kcmvp_alg;
    packet.kcmvp_mode = kcmvp_mode;
    packet.kcmvp_key = kcmvp_key;
    packet.kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet.ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet.iv, iv, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_MODE, (const char *)&packet, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
#endif
}

/**
 * @brief Send a set_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_mode_send_struct(mavlink_channel_t chan, const mavlink_set_mode_t* set_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_mode_send(chan, set_mode->target_system, set_mode->base_mode, set_mode->custom_mode, set_mode->kcmvp_alg, set_mode->kcmvp_mode, set_mode->kcmvp_key, set_mode->kcmvp_key_index, set_mode->ctr, set_mode->iv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_MODE, (const char *)set_mode, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t base_mode, uint32_t custom_mode, uint8_t kcmvp_alg, uint8_t kcmvp_mode, uint8_t kcmvp_key, uint8_t kcmvp_key_index, const uint8_t *ctr, const uint8_t *iv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, custom_mode);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, base_mode);
    _mav_put_uint8_t(buf, 6, kcmvp_alg);
    _mav_put_uint8_t(buf, 7, kcmvp_mode);
    _mav_put_uint8_t(buf, 8, kcmvp_key);
    _mav_put_uint8_t(buf, 9, kcmvp_key_index);
    _mav_put_uint8_t_array(buf, 10, ctr, 2);
    _mav_put_uint8_t_array(buf, 12, iv, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_MODE, buf, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
#else
    mavlink_set_mode_t *packet = (mavlink_set_mode_t *)msgbuf;
    packet->custom_mode = custom_mode;
    packet->target_system = target_system;
    packet->base_mode = base_mode;
    packet->kcmvp_alg = kcmvp_alg;
    packet->kcmvp_mode = kcmvp_mode;
    packet->kcmvp_key = kcmvp_key;
    packet->kcmvp_key_index = kcmvp_key_index;
    mav_array_memcpy(packet->ctr, ctr, sizeof(uint8_t)*2);
    mav_array_memcpy(packet->iv, iv, sizeof(uint8_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_MODE, (const char *)packet, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_MODE UNPACKING


/**
 * @brief Get field target_system from set_mode message
 *
 * @return  The system setting the mode
 */
static inline uint8_t mavlink_msg_set_mode_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field base_mode from set_mode message
 *
 * @return  The new base mode.
 */
static inline uint8_t mavlink_msg_set_mode_get_base_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field custom_mode from set_mode message
 *
 * @return  The new autopilot-specific mode. This field can be ignored by an autopilot.
 */
static inline uint32_t mavlink_msg_set_mode_get_custom_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field kcmvp_alg from set_mode message
 *
 * @return  KCMVP algorithm.
 */
static inline uint8_t mavlink_msg_set_mode_get_kcmvp_alg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field kcmvp_mode from set_mode message
 *
 * @return  KCMVP Mode.
 */
static inline uint8_t mavlink_msg_set_mode_get_kcmvp_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field kcmvp_key from set_mode message
 *
 * @return  KCMVP Key.
 */
static inline uint8_t mavlink_msg_set_mode_get_kcmvp_key(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field kcmvp_key_index from set_mode message
 *
 * @return  KCMVP Key index.
 */
static inline uint8_t mavlink_msg_set_mode_get_kcmvp_key_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field ctr from set_mode message
 *
 * @return  ctr used by ctr mode.
 */
static inline uint16_t mavlink_msg_set_mode_get_ctr(const mavlink_message_t* msg, uint8_t *ctr)
{
    return _MAV_RETURN_uint8_t_array(msg, ctr, 2,  10);
}

/**
 * @brief Get field iv from set_mode message
 *
 * @return  initial vector used by cbc mode.
 */
static inline uint16_t mavlink_msg_set_mode_get_iv(const mavlink_message_t* msg, uint8_t *iv)
{
    return _MAV_RETURN_uint8_t_array(msg, iv, 2,  12);
}

/**
 * @brief Decode a set_mode message into a struct
 *
 * @param msg The message to decode
 * @param set_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_mode_decode(const mavlink_message_t* msg, mavlink_set_mode_t* set_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_mode->custom_mode = mavlink_msg_set_mode_get_custom_mode(msg);
    set_mode->target_system = mavlink_msg_set_mode_get_target_system(msg);
    set_mode->base_mode = mavlink_msg_set_mode_get_base_mode(msg);
    set_mode->kcmvp_alg = mavlink_msg_set_mode_get_kcmvp_alg(msg);
    set_mode->kcmvp_mode = mavlink_msg_set_mode_get_kcmvp_mode(msg);
    set_mode->kcmvp_key = mavlink_msg_set_mode_get_kcmvp_key(msg);
    set_mode->kcmvp_key_index = mavlink_msg_set_mode_get_kcmvp_key_index(msg);
    mavlink_msg_set_mode_get_ctr(msg, set_mode->ctr);
    mavlink_msg_set_mode_get_iv(msg, set_mode->iv);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_MODE_LEN? msg->len : MAVLINK_MSG_ID_SET_MODE_LEN;
        memset(set_mode, 0, MAVLINK_MSG_ID_SET_MODE_LEN);
    memcpy(set_mode, _MAV_PAYLOAD(msg), len);
#endif
}
