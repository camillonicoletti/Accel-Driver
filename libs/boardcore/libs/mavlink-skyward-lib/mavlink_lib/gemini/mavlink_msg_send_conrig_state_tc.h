#pragma once
// MESSAGE SEND_CONRIG_STATE_TC PACKING

#define MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC 18


typedef struct __mavlink_send_conrig_state_tc_t {
 uint8_t ignition_btn; /*<  Ignition button pressed*/
 uint8_t filling_valve_btn; /*<  Open filling valve pressed*/
 uint8_t venting_valve_btn; /*<  Open venting valve pressed*/
 uint8_t release_pressure_btn; /*<  Release filling line pressure pressed*/
 uint8_t quick_connector_btn; /*<  Detach quick connector pressed*/
 uint8_t start_tars_btn; /*<  Startup TARS pressed*/
} mavlink_send_conrig_state_tc_t;

#define MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN 6
#define MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN 6
#define MAVLINK_MSG_ID_18_LEN 6
#define MAVLINK_MSG_ID_18_MIN_LEN 6

#define MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC 149
#define MAVLINK_MSG_ID_18_CRC 149



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SEND_CONRIG_STATE_TC { \
    18, \
    "SEND_CONRIG_STATE_TC", \
    6, \
    {  { "ignition_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_send_conrig_state_tc_t, ignition_btn) }, \
         { "filling_valve_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_send_conrig_state_tc_t, filling_valve_btn) }, \
         { "venting_valve_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_send_conrig_state_tc_t, venting_valve_btn) }, \
         { "release_pressure_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_send_conrig_state_tc_t, release_pressure_btn) }, \
         { "quick_connector_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_send_conrig_state_tc_t, quick_connector_btn) }, \
         { "start_tars_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_send_conrig_state_tc_t, start_tars_btn) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SEND_CONRIG_STATE_TC { \
    "SEND_CONRIG_STATE_TC", \
    6, \
    {  { "ignition_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_send_conrig_state_tc_t, ignition_btn) }, \
         { "filling_valve_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_send_conrig_state_tc_t, filling_valve_btn) }, \
         { "venting_valve_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_send_conrig_state_tc_t, venting_valve_btn) }, \
         { "release_pressure_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_send_conrig_state_tc_t, release_pressure_btn) }, \
         { "quick_connector_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_send_conrig_state_tc_t, quick_connector_btn) }, \
         { "start_tars_btn", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_send_conrig_state_tc_t, start_tars_btn) }, \
         } \
}
#endif

/**
 * @brief Pack a send_conrig_state_tc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ignition_btn  Ignition button pressed
 * @param filling_valve_btn  Open filling valve pressed
 * @param venting_valve_btn  Open venting valve pressed
 * @param release_pressure_btn  Release filling line pressure pressed
 * @param quick_connector_btn  Detach quick connector pressed
 * @param start_tars_btn  Startup TARS pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_conrig_state_tc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t ignition_btn, uint8_t filling_valve_btn, uint8_t venting_valve_btn, uint8_t release_pressure_btn, uint8_t quick_connector_btn, uint8_t start_tars_btn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN];
    _mav_put_uint8_t(buf, 0, ignition_btn);
    _mav_put_uint8_t(buf, 1, filling_valve_btn);
    _mav_put_uint8_t(buf, 2, venting_valve_btn);
    _mav_put_uint8_t(buf, 3, release_pressure_btn);
    _mav_put_uint8_t(buf, 4, quick_connector_btn);
    _mav_put_uint8_t(buf, 5, start_tars_btn);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN);
#else
    mavlink_send_conrig_state_tc_t packet;
    packet.ignition_btn = ignition_btn;
    packet.filling_valve_btn = filling_valve_btn;
    packet.venting_valve_btn = venting_valve_btn;
    packet.release_pressure_btn = release_pressure_btn;
    packet.quick_connector_btn = quick_connector_btn;
    packet.start_tars_btn = start_tars_btn;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
}

/**
 * @brief Pack a send_conrig_state_tc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ignition_btn  Ignition button pressed
 * @param filling_valve_btn  Open filling valve pressed
 * @param venting_valve_btn  Open venting valve pressed
 * @param release_pressure_btn  Release filling line pressure pressed
 * @param quick_connector_btn  Detach quick connector pressed
 * @param start_tars_btn  Startup TARS pressed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_send_conrig_state_tc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t ignition_btn,uint8_t filling_valve_btn,uint8_t venting_valve_btn,uint8_t release_pressure_btn,uint8_t quick_connector_btn,uint8_t start_tars_btn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN];
    _mav_put_uint8_t(buf, 0, ignition_btn);
    _mav_put_uint8_t(buf, 1, filling_valve_btn);
    _mav_put_uint8_t(buf, 2, venting_valve_btn);
    _mav_put_uint8_t(buf, 3, release_pressure_btn);
    _mav_put_uint8_t(buf, 4, quick_connector_btn);
    _mav_put_uint8_t(buf, 5, start_tars_btn);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN);
#else
    mavlink_send_conrig_state_tc_t packet;
    packet.ignition_btn = ignition_btn;
    packet.filling_valve_btn = filling_valve_btn;
    packet.venting_valve_btn = venting_valve_btn;
    packet.release_pressure_btn = release_pressure_btn;
    packet.quick_connector_btn = quick_connector_btn;
    packet.start_tars_btn = start_tars_btn;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
}

/**
 * @brief Encode a send_conrig_state_tc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param send_conrig_state_tc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_conrig_state_tc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_send_conrig_state_tc_t* send_conrig_state_tc)
{
    return mavlink_msg_send_conrig_state_tc_pack(system_id, component_id, msg, send_conrig_state_tc->ignition_btn, send_conrig_state_tc->filling_valve_btn, send_conrig_state_tc->venting_valve_btn, send_conrig_state_tc->release_pressure_btn, send_conrig_state_tc->quick_connector_btn, send_conrig_state_tc->start_tars_btn);
}

/**
 * @brief Encode a send_conrig_state_tc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param send_conrig_state_tc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_send_conrig_state_tc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_send_conrig_state_tc_t* send_conrig_state_tc)
{
    return mavlink_msg_send_conrig_state_tc_pack_chan(system_id, component_id, chan, msg, send_conrig_state_tc->ignition_btn, send_conrig_state_tc->filling_valve_btn, send_conrig_state_tc->venting_valve_btn, send_conrig_state_tc->release_pressure_btn, send_conrig_state_tc->quick_connector_btn, send_conrig_state_tc->start_tars_btn);
}

/**
 * @brief Send a send_conrig_state_tc message
 * @param chan MAVLink channel to send the message
 *
 * @param ignition_btn  Ignition button pressed
 * @param filling_valve_btn  Open filling valve pressed
 * @param venting_valve_btn  Open venting valve pressed
 * @param release_pressure_btn  Release filling line pressure pressed
 * @param quick_connector_btn  Detach quick connector pressed
 * @param start_tars_btn  Startup TARS pressed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_send_conrig_state_tc_send(mavlink_channel_t chan, uint8_t ignition_btn, uint8_t filling_valve_btn, uint8_t venting_valve_btn, uint8_t release_pressure_btn, uint8_t quick_connector_btn, uint8_t start_tars_btn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN];
    _mav_put_uint8_t(buf, 0, ignition_btn);
    _mav_put_uint8_t(buf, 1, filling_valve_btn);
    _mav_put_uint8_t(buf, 2, venting_valve_btn);
    _mav_put_uint8_t(buf, 3, release_pressure_btn);
    _mav_put_uint8_t(buf, 4, quick_connector_btn);
    _mav_put_uint8_t(buf, 5, start_tars_btn);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC, buf, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
#else
    mavlink_send_conrig_state_tc_t packet;
    packet.ignition_btn = ignition_btn;
    packet.filling_valve_btn = filling_valve_btn;
    packet.venting_valve_btn = venting_valve_btn;
    packet.release_pressure_btn = release_pressure_btn;
    packet.quick_connector_btn = quick_connector_btn;
    packet.start_tars_btn = start_tars_btn;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC, (const char *)&packet, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
#endif
}

/**
 * @brief Send a send_conrig_state_tc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_send_conrig_state_tc_send_struct(mavlink_channel_t chan, const mavlink_send_conrig_state_tc_t* send_conrig_state_tc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_send_conrig_state_tc_send(chan, send_conrig_state_tc->ignition_btn, send_conrig_state_tc->filling_valve_btn, send_conrig_state_tc->venting_valve_btn, send_conrig_state_tc->release_pressure_btn, send_conrig_state_tc->quick_connector_btn, send_conrig_state_tc->start_tars_btn);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC, (const char *)send_conrig_state_tc, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
#endif
}

#if MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_send_conrig_state_tc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t ignition_btn, uint8_t filling_valve_btn, uint8_t venting_valve_btn, uint8_t release_pressure_btn, uint8_t quick_connector_btn, uint8_t start_tars_btn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, ignition_btn);
    _mav_put_uint8_t(buf, 1, filling_valve_btn);
    _mav_put_uint8_t(buf, 2, venting_valve_btn);
    _mav_put_uint8_t(buf, 3, release_pressure_btn);
    _mav_put_uint8_t(buf, 4, quick_connector_btn);
    _mav_put_uint8_t(buf, 5, start_tars_btn);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC, buf, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
#else
    mavlink_send_conrig_state_tc_t *packet = (mavlink_send_conrig_state_tc_t *)msgbuf;
    packet->ignition_btn = ignition_btn;
    packet->filling_valve_btn = filling_valve_btn;
    packet->venting_valve_btn = venting_valve_btn;
    packet->release_pressure_btn = release_pressure_btn;
    packet->quick_connector_btn = quick_connector_btn;
    packet->start_tars_btn = start_tars_btn;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC, (const char *)packet, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_MIN_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_CRC);
#endif
}
#endif

#endif

// MESSAGE SEND_CONRIG_STATE_TC UNPACKING


/**
 * @brief Get field ignition_btn from send_conrig_state_tc message
 *
 * @return  Ignition button pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_ignition_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field filling_valve_btn from send_conrig_state_tc message
 *
 * @return  Open filling valve pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_filling_valve_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field venting_valve_btn from send_conrig_state_tc message
 *
 * @return  Open venting valve pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_venting_valve_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field release_pressure_btn from send_conrig_state_tc message
 *
 * @return  Release filling line pressure pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_release_pressure_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field quick_connector_btn from send_conrig_state_tc message
 *
 * @return  Detach quick connector pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_quick_connector_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field start_tars_btn from send_conrig_state_tc message
 *
 * @return  Startup TARS pressed
 */
static inline uint8_t mavlink_msg_send_conrig_state_tc_get_start_tars_btn(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a send_conrig_state_tc message into a struct
 *
 * @param msg The message to decode
 * @param send_conrig_state_tc C-struct to decode the message contents into
 */
static inline void mavlink_msg_send_conrig_state_tc_decode(const mavlink_message_t* msg, mavlink_send_conrig_state_tc_t* send_conrig_state_tc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    send_conrig_state_tc->ignition_btn = mavlink_msg_send_conrig_state_tc_get_ignition_btn(msg);
    send_conrig_state_tc->filling_valve_btn = mavlink_msg_send_conrig_state_tc_get_filling_valve_btn(msg);
    send_conrig_state_tc->venting_valve_btn = mavlink_msg_send_conrig_state_tc_get_venting_valve_btn(msg);
    send_conrig_state_tc->release_pressure_btn = mavlink_msg_send_conrig_state_tc_get_release_pressure_btn(msg);
    send_conrig_state_tc->quick_connector_btn = mavlink_msg_send_conrig_state_tc_get_quick_connector_btn(msg);
    send_conrig_state_tc->start_tars_btn = mavlink_msg_send_conrig_state_tc_get_start_tars_btn(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN? msg->len : MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN;
        memset(send_conrig_state_tc, 0, MAVLINK_MSG_ID_SEND_CONRIG_STATE_TC_LEN);
    memcpy(send_conrig_state_tc, _MAV_PAYLOAD(msg), len);
#endif
}
