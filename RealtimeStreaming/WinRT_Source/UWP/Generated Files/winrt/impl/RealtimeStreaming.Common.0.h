﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

WINRT_EXPORT namespace winrt::RealtimeStreaming::Common {

enum class PayloadType : int32_t
{
    Unknown = 0,
    State_Scene = 1,
    State_Input = 2,
    State_CaptureReady = 3,
    State_CaptureStarted = 4,
    State_CaptureStopped = 5,
    RequestMediaDescription = 6,
    RequestMediaStart = 7,
    RequestMediaStop = 8,
    RequestMediaCaptureStart = 9,
    RequestMediaCaptureRecord = 10,
    RequestMediaCaptureStop = 11,
    RequestMediaEncodeStart = 12,
    RequestMediaEncodeStop = 13,
    SendMediaDescription = 14,
    SendMediaSample = 15,
    SendMediaStreamTick = 16,
    SendFormatChange = 17,
    ENDOFLIST = 18,
};

enum class SampleFlags : int32_t
{
    SampleFlag_BottomFieldFirst = 0,
    SampleFlag_CleanPoint = 1,
    SampleFlag_DerivedFromTopField = 2,
    SampleFlag_Discontinuity = 3,
    SampleFlag_Interlaced = 4,
    SampleFlag_RepeatFirstField = 5,
    SampleFlag_SingleField = 6,
};

struct MediaDescription;
struct MediaSampleHeader;
struct MediaStreamTick;
struct MediaTypeDescription;
struct PayloadHeader;

}

namespace winrt::impl {

template <> struct category<RealtimeStreaming::Common::PayloadType>{ using type = enum_category; };
template <> struct category<RealtimeStreaming::Common::SampleFlags>{ using type = enum_category; };
template <> struct category<RealtimeStreaming::Common::MediaDescription>{ using type = struct_category<uint32_t,uint32_t>; };
template <> struct category<RealtimeStreaming::Common::MediaSampleHeader>{ using type = struct_category<uint32_t,uint64_t,uint64_t,uint32_t,uint32_t>; };
template <> struct category<RealtimeStreaming::Common::MediaStreamTick>{ using type = struct_category<uint32_t,uint64_t,uint32_t>; };
template <> struct category<RealtimeStreaming::Common::MediaTypeDescription>{ using type = struct_category<winrt::guid,winrt::guid,uint32_t,uint32_t>; };
template <> struct category<RealtimeStreaming::Common::PayloadHeader>{ using type = struct_category<RealtimeStreaming::Common::PayloadType,uint32_t>; };
template <> struct name<RealtimeStreaming::Common::PayloadType>{ static constexpr auto & value{ L"RealtimeStreaming.Common.PayloadType" }; };
template <> struct name<RealtimeStreaming::Common::SampleFlags>{ static constexpr auto & value{ L"RealtimeStreaming.Common.SampleFlags" }; };
template <> struct name<RealtimeStreaming::Common::MediaDescription>{ static constexpr auto & value{ L"RealtimeStreaming.Common.MediaDescription" }; };
template <> struct name<RealtimeStreaming::Common::MediaSampleHeader>{ static constexpr auto & value{ L"RealtimeStreaming.Common.MediaSampleHeader" }; };
template <> struct name<RealtimeStreaming::Common::MediaStreamTick>{ static constexpr auto & value{ L"RealtimeStreaming.Common.MediaStreamTick" }; };
template <> struct name<RealtimeStreaming::Common::MediaTypeDescription>{ static constexpr auto & value{ L"RealtimeStreaming.Common.MediaTypeDescription" }; };
template <> struct name<RealtimeStreaming::Common::PayloadHeader>{ static constexpr auto & value{ L"RealtimeStreaming.Common.PayloadHeader" }; };

struct struct_RealtimeStreaming_Common_MediaDescription
{
    uint32_t StreamCount;
    uint32_t StreamTypeHeaderSize;
};
template <> struct abi<RealtimeStreaming::Common::MediaDescription>{ using type = struct_RealtimeStreaming_Common_MediaDescription; };


struct struct_RealtimeStreaming_Common_MediaSampleHeader
{
    uint32_t dwStreamId;
    uint64_t hnsTimestamp;
    uint64_t hnsDuration;
    uint32_t dwFlags;
    uint32_t dwFlagMasks;
};
template <> struct abi<RealtimeStreaming::Common::MediaSampleHeader>{ using type = struct_RealtimeStreaming_Common_MediaSampleHeader; };


struct struct_RealtimeStreaming_Common_MediaStreamTick
{
    uint32_t dwStreamId;
    uint64_t hnsTimestamp;
    uint32_t cbAttributesSize;
};
template <> struct abi<RealtimeStreaming::Common::MediaStreamTick>{ using type = struct_RealtimeStreaming_Common_MediaStreamTick; };


struct struct_RealtimeStreaming_Common_MediaTypeDescription
{
    winrt::guid guiMajorType;
    winrt::guid guiSubType;
    uint32_t dwStreamId;
    uint32_t AttributesBlobSize;
};
template <> struct abi<RealtimeStreaming::Common::MediaTypeDescription>{ using type = struct_RealtimeStreaming_Common_MediaTypeDescription; };


struct struct_RealtimeStreaming_Common_PayloadHeader
{
    RealtimeStreaming::Common::PayloadType ePayloadType;
    uint32_t cbPayloadSize;
};
template <> struct abi<RealtimeStreaming::Common::PayloadHeader>{ using type = struct_RealtimeStreaming_Common_PayloadHeader; };


}
