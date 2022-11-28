#pragma once
// MESSAGE ASCENT_REMOTE_ID_GCS_DATA PACKING

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA 11060


typedef struct __mavlink_ascent_remote_id_gcs_data_t {
 int32_t gcs_lat; /*<  Latitude of the operator.*/
 int32_t gcs_lon; /*<  Longitude of the operator.*/
 uint32_t gcs_timestamp_s; /*<  UTC timestamp w.r.t. 01/01/2019*/
 uint16_t gcs_alt_geo; /*<  Alt Geo of the operator*/
 uint8_t gcs_emergency; /*<  Operator declared emergency*/
} mavlink_ascent_remote_id_gcs_data_t;

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN 15
#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN 15
#define MAVLINK_MSG_ID_11060_LEN 15
#define MAVLINK_MSG_ID_11060_MIN_LEN 15

#define MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC 52
#define MAVLINK_MSG_ID_11060_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID_GCS_DATA { \
    11060, \
    "ASCENT_REMOTE_ID_GCS_DATA", \
    5, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_lon) }, \
         { "gcs_alt_geo", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_alt_geo) }, \
         { "gcs_timestamp_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_timestamp_s) }, \
         { "gcs_emergency", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_emergency) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCENT_REMOTE_ID_GCS_DATA { \
    "ASCENT_REMOTE_ID_GCS_DATA", \
    5, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_lon) }, \
         { "gcs_alt_geo", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_alt_geo) }, \
         { "gcs_timestamp_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_timestamp_s) }, \
         { "gcs_emergency", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_ascent_remote_id_gcs_data_t, gcs_emergency) }, \
         } \
}
#endif

/**
 * @brief Pack a ascent_remote_id_gcs_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 * @param gcs_timestamp_s  UTC timestamp w.r.t. 01/01/2019
 * @param gcs_emergency  Operator declared emergency
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo, uint32_t gcs_timestamp_s, uint8_t gcs_emergency)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint32_t(buf, 8, gcs_timestamp_s);
    _mav_put_uint16_t(buf, 12, gcs_alt_geo);
    _mav_put_uint8_t(buf, 14, gcs_emergency);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN);
#else
    mavlink_ascent_remote_id_gcs_data_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_timestamp_s = gcs_timestamp_s;
    packet.gcs_alt_geo = gcs_alt_geo;
    packet.gcs_emergency = gcs_emergency;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
}

/**
 * @brief Pack a ascent_remote_id_gcs_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 * @param gcs_timestamp_s  UTC timestamp w.r.t. 01/01/2019
 * @param gcs_emergency  Operator declared emergency
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t gcs_lat,int32_t gcs_lon,uint16_t gcs_alt_geo,uint32_t gcs_timestamp_s,uint8_t gcs_emergency)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint32_t(buf, 8, gcs_timestamp_s);
    _mav_put_uint16_t(buf, 12, gcs_alt_geo);
    _mav_put_uint8_t(buf, 14, gcs_emergency);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN);
#else
    mavlink_ascent_remote_id_gcs_data_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_timestamp_s = gcs_timestamp_s;
    packet.gcs_alt_geo = gcs_alt_geo;
    packet.gcs_emergency = gcs_emergency;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
}

/**
 * @brief Encode a ascent_remote_id_gcs_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id_gcs_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascent_remote_id_gcs_data_t* ascent_remote_id_gcs_data)
{
    return mavlink_msg_ascent_remote_id_gcs_data_pack(system_id, component_id, msg, ascent_remote_id_gcs_data->gcs_lat, ascent_remote_id_gcs_data->gcs_lon, ascent_remote_id_gcs_data->gcs_alt_geo, ascent_remote_id_gcs_data->gcs_timestamp_s, ascent_remote_id_gcs_data->gcs_emergency);
}

/**
 * @brief Encode a ascent_remote_id_gcs_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascent_remote_id_gcs_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascent_remote_id_gcs_data_t* ascent_remote_id_gcs_data)
{
    return mavlink_msg_ascent_remote_id_gcs_data_pack_chan(system_id, component_id, chan, msg, ascent_remote_id_gcs_data->gcs_lat, ascent_remote_id_gcs_data->gcs_lon, ascent_remote_id_gcs_data->gcs_alt_geo, ascent_remote_id_gcs_data->gcs_timestamp_s, ascent_remote_id_gcs_data->gcs_emergency);
}

/**
 * @brief Send a ascent_remote_id_gcs_data message
 * @param chan MAVLink channel to send the message
 *
 * @param gcs_lat  Latitude of the operator.
 * @param gcs_lon  Longitude of the operator.
 * @param gcs_alt_geo  Alt Geo of the operator
 * @param gcs_timestamp_s  UTC timestamp w.r.t. 01/01/2019
 * @param gcs_emergency  Operator declared emergency
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascent_remote_id_gcs_data_send(mavlink_channel_t chan, int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo, uint32_t gcs_timestamp_s, uint8_t gcs_emergency)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint32_t(buf, 8, gcs_timestamp_s);
    _mav_put_uint16_t(buf, 12, gcs_alt_geo);
    _mav_put_uint8_t(buf, 14, gcs_emergency);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
#else
    mavlink_ascent_remote_id_gcs_data_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_timestamp_s = gcs_timestamp_s;
    packet.gcs_alt_geo = gcs_alt_geo;
    packet.gcs_emergency = gcs_emergency;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA, (const char *)&packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
#endif
}

/**
 * @brief Send a ascent_remote_id_gcs_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascent_remote_id_gcs_data_send_struct(mavlink_channel_t chan, const mavlink_ascent_remote_id_gcs_data_t* ascent_remote_id_gcs_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascent_remote_id_gcs_data_send(chan, ascent_remote_id_gcs_data->gcs_lat, ascent_remote_id_gcs_data->gcs_lon, ascent_remote_id_gcs_data->gcs_alt_geo, ascent_remote_id_gcs_data->gcs_timestamp_s, ascent_remote_id_gcs_data->gcs_emergency);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA, (const char *)ascent_remote_id_gcs_data, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascent_remote_id_gcs_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t gcs_lat, int32_t gcs_lon, uint16_t gcs_alt_geo, uint32_t gcs_timestamp_s, uint8_t gcs_emergency)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_uint32_t(buf, 8, gcs_timestamp_s);
    _mav_put_uint16_t(buf, 12, gcs_alt_geo);
    _mav_put_uint8_t(buf, 14, gcs_emergency);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA, buf, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
#else
    mavlink_ascent_remote_id_gcs_data_t *packet = (mavlink_ascent_remote_id_gcs_data_t *)msgbuf;
    packet->gcs_lat = gcs_lat;
    packet->gcs_lon = gcs_lon;
    packet->gcs_timestamp_s = gcs_timestamp_s;
    packet->gcs_alt_geo = gcs_alt_geo;
    packet->gcs_emergency = gcs_emergency;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA, (const char *)packet, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_MIN_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCENT_REMOTE_ID_GCS_DATA UNPACKING


/**
 * @brief Get field gcs_lat from ascent_remote_id_gcs_data message
 *
 * @return  Latitude of the operator.
 */
static inline int32_t mavlink_msg_ascent_remote_id_gcs_data_get_gcs_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field gcs_lon from ascent_remote_id_gcs_data message
 *
 * @return  Longitude of the operator.
 */
static inline int32_t mavlink_msg_ascent_remote_id_gcs_data_get_gcs_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field gcs_alt_geo from ascent_remote_id_gcs_data message
 *
 * @return  Alt Geo of the operator
 */
static inline uint16_t mavlink_msg_ascent_remote_id_gcs_data_get_gcs_alt_geo(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field gcs_timestamp_s from ascent_remote_id_gcs_data message
 *
 * @return  UTC timestamp w.r.t. 01/01/2019
 */
static inline uint32_t mavlink_msg_ascent_remote_id_gcs_data_get_gcs_timestamp_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field gcs_emergency from ascent_remote_id_gcs_data message
 *
 * @return  Operator declared emergency
 */
static inline uint8_t mavlink_msg_ascent_remote_id_gcs_data_get_gcs_emergency(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Decode a ascent_remote_id_gcs_data message into a struct
 *
 * @param msg The message to decode
 * @param ascent_remote_id_gcs_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascent_remote_id_gcs_data_decode(const mavlink_message_t* msg, mavlink_ascent_remote_id_gcs_data_t* ascent_remote_id_gcs_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascent_remote_id_gcs_data->gcs_lat = mavlink_msg_ascent_remote_id_gcs_data_get_gcs_lat(msg);
    ascent_remote_id_gcs_data->gcs_lon = mavlink_msg_ascent_remote_id_gcs_data_get_gcs_lon(msg);
    ascent_remote_id_gcs_data->gcs_timestamp_s = mavlink_msg_ascent_remote_id_gcs_data_get_gcs_timestamp_s(msg);
    ascent_remote_id_gcs_data->gcs_alt_geo = mavlink_msg_ascent_remote_id_gcs_data_get_gcs_alt_geo(msg);
    ascent_remote_id_gcs_data->gcs_emergency = mavlink_msg_ascent_remote_id_gcs_data_get_gcs_emergency(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN? msg->len : MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN;
        memset(ascent_remote_id_gcs_data, 0, MAVLINK_MSG_ID_ASCENT_REMOTE_ID_GCS_DATA_LEN);
    memcpy(ascent_remote_id_gcs_data, _MAV_PAYLOAD(msg), len);
#endif
}
