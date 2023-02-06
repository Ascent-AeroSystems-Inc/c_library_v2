#pragma once
// MESSAGE ASCENT_REMOTE_ID_GCS_POS PACKING

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS 11060


typedef struct __mavlink_ascent_remote_id_gcs_pos_t {
 int32_t gcs_lat; /*<  Latitude of the operator.*/
 int32_t gcs_lon; /*<  Longitude of the operator.*/
 uint16_t gcs_alt_geo; /*<  Alt Geo of the operator*/
} mavlink_ascent_remote_id_gcs_pos_t;

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN 10
#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN 10
#define MAVLINK_MSG_ID_11060_LEN 10
#define MAVLINK_MSG_ID_11060_MIN_LEN 10

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC 56
#define MAVLINK_MSG_ID_11060_CRC 56



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID_GCS_POS { \
    11060, \
    "ASCENT_REMOTE_ID_GCS_POS", \
    3, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_lon) }, \
         { "gcs_alt_geo", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_alt_geo) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID_GCS_POS { \
    "ASCENT_REMOTE_ID_GCS_POS", \
    3, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_lon) }, \
         { "gcs_alt_geo", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_ascent_remote_id_gcs_pos_t, gcs_alt_geo) }, \
         } \
}
#endif

/**
 * @brief Pack a ascent_remote_id_gcs_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint16_t(buf, 8, gcs_alt_geo);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN);
#else
    mavlink_ascent_remote_id_gcs_pos_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt_geo = gcs_alt_geo;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
}

/**
 * @brief Pack a ascent_remote_id_gcs_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t gcs_lat,int32_t gcs_lon,uint16_t gcs_alt_geo)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint16_t(buf, 8, gcs_alt_geo);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN);
#else
    mavlink_ascent_remote_id_gcs_pos_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt_geo = gcs_alt_geo;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
}

/**
 * @brief Encode a ascent_remote_id_gcs_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id_gcs_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascent_remote_id_gcs_pos_t* ascent_remote_id_gcs_pos)
{
    return mavlink_msg_ascent_remote_id_gcs_pos_pack(system_id, component_id, msg, ascent_remote_id_gcs_pos->gcs_lat, ascent_remote_id_gcs_pos->gcs_lon, ascent_remote_id_gcs_pos->gcs_alt_geo);
}

/**
 * @brief Encode a ascent_remote_id_gcs_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id_gcs_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascent_remote_id_gcs_pos_t* ascent_remote_id_gcs_pos)
{
    return mavlink_msg_ascent_remote_id_gcs_pos_pack_chan(system_id, component_id, chan, msg, ascent_remote_id_gcs_pos->gcs_lat, ascent_remote_id_gcs_pos->gcs_lon, ascent_remote_id_gcs_pos->gcs_alt_geo);
}

/**
 * @brief Send a ascent_remote_id_gcs_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascent_remote_id_gcs_pos_send(mavlink_channel_t chan, int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint16_t(buf, 8, gcs_alt_geo);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
#else
    mavlink_ascent_remote_id_gcs_pos_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt_geo = gcs_alt_geo;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS, (const char *)&packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
#endif
}

/**
 * @brief Send a ascent_remote_id_gcs_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascent_remote_id_gcs_pos_send_struct(mavlink_channel_t chan, const mavlink_ascent_remote_id_gcs_pos_t* ascent_remote_id_gcs_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascent_remote_id_gcs_pos_send(chan, ascent_remote_id_gcs_pos->gcs_lat, ascent_remote_id_gcs_pos->gcs_lon, ascent_remote_id_gcs_pos->gcs_alt_geo);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS, (const char *)ascent_remote_id_gcs_pos, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascent_remote_id_gcs_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint16_t(buf, 8, gcs_alt_geo);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
#else
    mavlink_ascent_remote_id_gcs_pos_t *packet = (mavlink_ascent_remote_id_gcs_pos_t *)msgbuf;
    packet->gcs_lat = gcs_lat;
    packet->gcs_lon = gcs_lon;
    packet->gcs_alt_geo = gcs_alt_geo;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS, (const char *)packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCENT_REMOTE_ID_GCS_POS UNPACKING


/**
 * @brief Get field gcs_lat from ascent_remote_id_gcs_pos message
 *
 * @return  Latitude of the operator.
 */
static inline int32_t mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field gcs_lon from ascent_remote_id_gcs_pos message
 *
 * @return  Longitude of the operator.
 */
static inline int32_t mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field gcs_alt_geo from ascent_remote_id_gcs_pos message
 *
 * @return  Alt Geo of the operator
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_alt_geo(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Decode a ascent_remote_id_gcs_pos message into a struct
 *
 * @param msg The message to decode
 * @param ascent_remote_id_gcs_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascent_remote_id_gcs_pos_decode(const mavlink_message_t* msg, mavlink_ascent_remote_id_gcs_pos_t* ascent_remote_id_gcs_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascent_remote_id_gcs_pos->gcs_lat = mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_lat(msg);
    ascent_remote_id_gcs_pos->gcs_lon = mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_lon(msg);
    ascent_remote_id_gcs_pos->gcs_alt_geo = mavlink_msg_ascent_remote_id_gcs_pos_get_gcs_alt_geo(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN? msg->len : MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN;
        memset(ascent_remote_id_gcs_pos, 0, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_POS_LEN);
    memcpy(ascent_remote_id_gcs_pos, _MAV_PAYLOAD(msg), len);
#endif
}
