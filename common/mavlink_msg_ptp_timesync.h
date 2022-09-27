#pragma once
// MESSAGE PTP_TIMESYNC PACKING

#define MAVLINK_MSG_ID_PTP_TIMESYNC 208


typedef struct __mavlink_ptp_timesync_t {
 uint32_t time_sec; /*<  Timestamp sec*/
 uint32_t time_nsec; /*<  Timestamp nsec*/
 uint8_t msg_type; /*<  PTP msg type*/
 uint8_t target_system; /*<  System ID (0 for broadcast)*/
} mavlink_ptp_timesync_t;

#define MAVLINK_MSG_ID_PTP_TIMESYNC_LEN 10
#define MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN 10
#define MAVLINK_MSG_ID_208_LEN 10
#define MAVLINK_MSG_ID_208_MIN_LEN 10

#define MAVLINK_MSG_ID_PTP_TIMESYNC_CRC 184
#define MAVLINK_MSG_ID_208_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PTP_TIMESYNC { \
    208, \
    "PTP_TIMESYNC", \
    4, \
    {  { "msg_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ptp_timesync_t, msg_type) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ptp_timesync_t, target_system) }, \
         { "time_sec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ptp_timesync_t, time_sec) }, \
         { "time_nsec", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ptp_timesync_t, time_nsec) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PTP_TIMESYNC { \
    "PTP_TIMESYNC", \
    4, \
    {  { "msg_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ptp_timesync_t, msg_type) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ptp_timesync_t, target_system) }, \
         { "time_sec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ptp_timesync_t, time_sec) }, \
         { "time_nsec", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_ptp_timesync_t, time_nsec) }, \
         } \
}
#endif

/**
 * @brief Pack a ptp_timesync message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param msg_type  PTP msg type
 * @param target_system  System ID (0 for broadcast)
 * @param time_sec  Timestamp sec
 * @param time_nsec  Timestamp nsec
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ptp_timesync_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t msg_type, uint8_t target_system, uint32_t time_sec, uint32_t time_nsec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PTP_TIMESYNC_LEN];
    _mav_put_uint32_t(buf, 0, time_sec);
    _mav_put_uint32_t(buf, 4, time_nsec);
    _mav_put_uint8_t(buf, 8, msg_type);
    _mav_put_uint8_t(buf, 9, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN);
#else
    mavlink_ptp_timesync_t packet;
    packet.time_sec = time_sec;
    packet.time_nsec = time_nsec;
    packet.msg_type = msg_type;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PTP_TIMESYNC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
}

/**
 * @brief Pack a ptp_timesync message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param msg_type  PTP msg type
 * @param target_system  System ID (0 for broadcast)
 * @param time_sec  Timestamp sec
 * @param time_nsec  Timestamp nsec
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ptp_timesync_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t msg_type,uint8_t target_system,uint32_t time_sec,uint32_t time_nsec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PTP_TIMESYNC_LEN];
    _mav_put_uint32_t(buf, 0, time_sec);
    _mav_put_uint32_t(buf, 4, time_nsec);
    _mav_put_uint8_t(buf, 8, msg_type);
    _mav_put_uint8_t(buf, 9, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN);
#else
    mavlink_ptp_timesync_t packet;
    packet.time_sec = time_sec;
    packet.time_nsec = time_nsec;
    packet.msg_type = msg_type;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PTP_TIMESYNC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
}

/**
 * @brief Encode a ptp_timesync struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ptp_timesync C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ptp_timesync_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ptp_timesync_t* ptp_timesync)
{
    return mavlink_msg_ptp_timesync_pack(system_id, component_id, msg, ptp_timesync->msg_type, ptp_timesync->target_system, ptp_timesync->time_sec, ptp_timesync->time_nsec);
}

/**
 * @brief Encode a ptp_timesync struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ptp_timesync C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ptp_timesync_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ptp_timesync_t* ptp_timesync)
{
    return mavlink_msg_ptp_timesync_pack_chan(system_id, component_id, chan, msg, ptp_timesync->msg_type, ptp_timesync->target_system, ptp_timesync->time_sec, ptp_timesync->time_nsec);
}

/**
 * @brief Send a ptp_timesync message
 * @param chan MAVLink channel to send the message
 *
 * @param msg_type  PTP msg type
 * @param target_system  System ID (0 for broadcast)
 * @param time_sec  Timestamp sec
 * @param time_nsec  Timestamp nsec
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ptp_timesync_send(mavlink_channel_t chan, uint8_t msg_type, uint8_t target_system, uint32_t time_sec, uint32_t time_nsec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PTP_TIMESYNC_LEN];
    _mav_put_uint32_t(buf, 0, time_sec);
    _mav_put_uint32_t(buf, 4, time_nsec);
    _mav_put_uint8_t(buf, 8, msg_type);
    _mav_put_uint8_t(buf, 9, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PTP_TIMESYNC, buf, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
#else
    mavlink_ptp_timesync_t packet;
    packet.time_sec = time_sec;
    packet.time_nsec = time_nsec;
    packet.msg_type = msg_type;
    packet.target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PTP_TIMESYNC, (const char *)&packet, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
#endif
}

/**
 * @brief Send a ptp_timesync message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ptp_timesync_send_struct(mavlink_channel_t chan, const mavlink_ptp_timesync_t* ptp_timesync)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ptp_timesync_send(chan, ptp_timesync->msg_type, ptp_timesync->target_system, ptp_timesync->time_sec, ptp_timesync->time_nsec);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PTP_TIMESYNC, (const char *)ptp_timesync, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
#endif
}

#if MAVLINK_MSG_ID_PTP_TIMESYNC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ptp_timesync_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t msg_type, uint8_t target_system, uint32_t time_sec, uint32_t time_nsec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_sec);
    _mav_put_uint32_t(buf, 4, time_nsec);
    _mav_put_uint8_t(buf, 8, msg_type);
    _mav_put_uint8_t(buf, 9, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PTP_TIMESYNC, buf, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
#else
    mavlink_ptp_timesync_t *packet = (mavlink_ptp_timesync_t *)msgbuf;
    packet->time_sec = time_sec;
    packet->time_nsec = time_nsec;
    packet->msg_type = msg_type;
    packet->target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PTP_TIMESYNC, (const char *)packet, MAVLINK_MSG_ID_PTP_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN, MAVLINK_MSG_ID_PTP_TIMESYNC_CRC);
#endif
}
#endif

#endif

// MESSAGE PTP_TIMESYNC UNPACKING


/**
 * @brief Get field msg_type from ptp_timesync message
 *
 * @return  PTP msg type
 */
static inline uint8_t mavlink_msg_ptp_timesync_get_msg_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_system from ptp_timesync message
 *
 * @return  System ID (0 for broadcast)
 */
static inline uint8_t mavlink_msg_ptp_timesync_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field time_sec from ptp_timesync message
 *
 * @return  Timestamp sec
 */
static inline uint32_t mavlink_msg_ptp_timesync_get_time_sec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field time_nsec from ptp_timesync message
 *
 * @return  Timestamp nsec
 */
static inline uint32_t mavlink_msg_ptp_timesync_get_time_nsec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a ptp_timesync message into a struct
 *
 * @param msg The message to decode
 * @param ptp_timesync C-struct to decode the message contents into
 */
static inline void mavlink_msg_ptp_timesync_decode(const mavlink_message_t* msg, mavlink_ptp_timesync_t* ptp_timesync)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ptp_timesync->time_sec = mavlink_msg_ptp_timesync_get_time_sec(msg);
    ptp_timesync->time_nsec = mavlink_msg_ptp_timesync_get_time_nsec(msg);
    ptp_timesync->msg_type = mavlink_msg_ptp_timesync_get_msg_type(msg);
    ptp_timesync->target_system = mavlink_msg_ptp_timesync_get_target_system(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PTP_TIMESYNC_LEN? msg->len : MAVLINK_MSG_ID_PTP_TIMESYNC_LEN;
        memset(ptp_timesync, 0, MAVLINK_MSG_ID_PTP_TIMESYNC_LEN);
    memcpy(ptp_timesync, _MAV_PAYLOAD(msg), len);
#endif
}
