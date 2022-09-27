#pragma once
// MESSAGE KCMVP_CMD_ACK PACKING

#define MAVLINK_MSG_ID_KCMVP_CMD_ACK 207


typedef struct __mavlink_kcmvp_cmd_ack_t {
 uint8_t ack_result; /*<  ACK RESULT*/
} mavlink_kcmvp_cmd_ack_t;

#define MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN 1
#define MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN 1
#define MAVLINK_MSG_ID_207_LEN 1
#define MAVLINK_MSG_ID_207_MIN_LEN 1

#define MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC 81
#define MAVLINK_MSG_ID_207_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KCMVP_CMD_ACK { \
    207, \
    "KCMVP_CMD_ACK", \
    1, \
    {  { "ack_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_cmd_ack_t, ack_result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KCMVP_CMD_ACK { \
    "KCMVP_CMD_ACK", \
    1, \
    {  { "ack_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kcmvp_cmd_ack_t, ack_result) }, \
         } \
}
#endif

/**
 * @brief Pack a kcmvp_cmd_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ack_result  ACK RESULT
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_cmd_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t ack_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, ack_result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN);
#else
    mavlink_kcmvp_cmd_ack_t packet;
    packet.ack_result = ack_result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_CMD_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
}

/**
 * @brief Pack a kcmvp_cmd_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ack_result  ACK RESULT
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kcmvp_cmd_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t ack_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, ack_result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN);
#else
    mavlink_kcmvp_cmd_ack_t packet;
    packet.ack_result = ack_result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KCMVP_CMD_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
}

/**
 * @brief Encode a kcmvp_cmd_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_cmd_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_cmd_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kcmvp_cmd_ack_t* kcmvp_cmd_ack)
{
    return mavlink_msg_kcmvp_cmd_ack_pack(system_id, component_id, msg, kcmvp_cmd_ack->ack_result);
}

/**
 * @brief Encode a kcmvp_cmd_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kcmvp_cmd_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kcmvp_cmd_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kcmvp_cmd_ack_t* kcmvp_cmd_ack)
{
    return mavlink_msg_kcmvp_cmd_ack_pack_chan(system_id, component_id, chan, msg, kcmvp_cmd_ack->ack_result);
}

/**
 * @brief Send a kcmvp_cmd_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param ack_result  ACK RESULT
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kcmvp_cmd_ack_send(mavlink_channel_t chan, uint8_t ack_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, ack_result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK, buf, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
#else
    mavlink_kcmvp_cmd_ack_t packet;
    packet.ack_result = ack_result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK, (const char *)&packet, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
#endif
}

/**
 * @brief Send a kcmvp_cmd_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kcmvp_cmd_ack_send_struct(mavlink_channel_t chan, const mavlink_kcmvp_cmd_ack_t* kcmvp_cmd_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kcmvp_cmd_ack_send(chan, kcmvp_cmd_ack->ack_result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK, (const char *)kcmvp_cmd_ack, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kcmvp_cmd_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t ack_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, ack_result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK, buf, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
#else
    mavlink_kcmvp_cmd_ack_t *packet = (mavlink_kcmvp_cmd_ack_t *)msgbuf;
    packet->ack_result = ack_result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KCMVP_CMD_ACK, (const char *)packet, MAVLINK_MSG_ID_KCMVP_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN, MAVLINK_MSG_ID_KCMVP_CMD_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE KCMVP_CMD_ACK UNPACKING


/**
 * @brief Get field ack_result from kcmvp_cmd_ack message
 *
 * @return  ACK RESULT
 */
static inline uint8_t mavlink_msg_kcmvp_cmd_ack_get_ack_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a kcmvp_cmd_ack message into a struct
 *
 * @param msg The message to decode
 * @param kcmvp_cmd_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_kcmvp_cmd_ack_decode(const mavlink_message_t* msg, mavlink_kcmvp_cmd_ack_t* kcmvp_cmd_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kcmvp_cmd_ack->ack_result = mavlink_msg_kcmvp_cmd_ack_get_ack_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN? msg->len : MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN;
        memset(kcmvp_cmd_ack, 0, MAVLINK_MSG_ID_KCMVP_CMD_ACK_LEN);
    memcpy(kcmvp_cmd_ack, _MAV_PAYLOAD(msg), len);
#endif
}
