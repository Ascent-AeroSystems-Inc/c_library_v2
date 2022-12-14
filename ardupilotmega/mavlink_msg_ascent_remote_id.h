#pragma once
// MESSAGE ASCENT_REMOTE_ID PACKING

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID 11060


typedef struct __mavlink_ascent_remote_id_t {
 uint8_t target_system; /*<  System ID.*/
 uint8_t target_component; /*<  Component ID.*/
 uint8_t health; /*<  Status of the remote ID module*/
} mavlink_ascent_remote_id_t;

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN 3
#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN 3
#define MAVLINK_MSG_ID_11060_LEN 3
#define MAVLINK_MSG_ID_11060_MIN_LEN 3

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC 183
#define MAVLINK_MSG_ID_11060_CRC 183



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID { \
    11060, \
    "ASCENT_REMOTE_ID", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ascent_remote_id_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ascent_remote_id_t, target_component) }, \
         { "health", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ascent_remote_id_t, health) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID { \
    "ASCENT_REMOTE_ID", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ascent_remote_id_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ascent_remote_id_t, target_component) }, \
         { "health", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ascent_remote_id_t, health) }, \
         } \
}
#endif

/**
 * @brief Pack a ascent_remote_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param health  Status of the remote ID module
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, health);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN);
#else
    mavlink_ascent_remote_id_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.health = health;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
}

/**
 * @brief Pack a ascent_remote_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param health  Status of the remote ID module
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, health);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN);
#else
    mavlink_ascent_remote_id_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.health = health;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
}

/**
 * @brief Encode a ascent_remote_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascent_remote_id_t* ascent_remote_id)
{
    return mavlink_msg_ascent_remote_id_pack(system_id, component_id, msg, ascent_remote_id->target_system, ascent_remote_id->target_component, ascent_remote_id->health);
}

/**
 * @brief Encode a ascent_remote_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascent_remote_id_t* ascent_remote_id)
{
    return mavlink_msg_ascent_remote_id_pack_chan(system_id, component_id, chan, msg, ascent_remote_id->target_system, ascent_remote_id->target_component, ascent_remote_id->health);
}

/**
 * @brief Send a ascent_remote_id message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param health  Status of the remote ID module
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascent_remote_id_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, health);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
#else
    mavlink_ascent_remote_id_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.health = health;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID, (const char *)&packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
#endif
}

/**
 * @brief Send a ascent_remote_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascent_remote_id_send_struct(mavlink_channel_t chan, const mavlink_ascent_remote_id_t* ascent_remote_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascent_remote_id_send(chan, ascent_remote_id->target_system, ascent_remote_id->target_component, ascent_remote_id->health);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID, (const char *)ascent_remote_id, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascent_remote_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, health);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
#else
    mavlink_ascent_remote_id_t *packet = (mavlink_ascent_remote_id_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->health = health;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID, (const char *)packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCENT_REMOTE_ID UNPACKING


/**
 * @brief Get field target_system from ascent_remote_id message
 *
 * @return  System ID.
 */
static inline uint8_t mavlink_msg_ascent_remote_id_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from ascent_remote_id message
 *
 * @return  Component ID.
 */
static inline uint8_t mavlink_msg_ascent_remote_id_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field health from ascent_remote_id message
 *
 * @return  Status of the remote ID module
 */
static inline uint8_t mavlink_msg_ascent_remote_id_get_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a ascent_remote_id message into a struct
 *
 * @param msg The message to decode
 * @param ascent_remote_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascent_remote_id_decode(const mavlink_message_t* msg, mavlink_ascent_remote_id_t* ascent_remote_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascent_remote_id->target_system = mavlink_msg_ascent_remote_id_get_target_system(msg);
    ascent_remote_id->target_component = mavlink_msg_ascent_remote_id_get_target_component(msg);
    ascent_remote_id->health = mavlink_msg_ascent_remote_id_get_health(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN? msg->len : MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN;
        memset(ascent_remote_id, 0, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_LEN);
    memcpy(ascent_remote_id, _MAV_PAYLOAD(msg), len);
#endif
}
