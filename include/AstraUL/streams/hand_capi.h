#ifndef HAND_CAPI_H
#define HAND_CAPI_H

#include <Astra/astra_defines.h>
#include <Astra/astra_types.h>
#include "hand_types.h"
#include <stdbool.h>

ASTRA_BEGIN_DECLS

ASTRA_API_EX astra_status_t astra_reader_get_handstream(astra_reader_t reader,
                                                                 astra_handstream_t* handStream);

ASTRA_API_EX astra_status_t astra_frame_get_handframe(astra_reader_frame_t readerFrame,
                                                               astra_handframe_t* handFrame);

ASTRA_API_EX astra_status_t astra_frame_get_handframe_with_subtype(astra_reader_frame_t readerFrame,
                                                                       astra_stream_subtype_t subtype,
                                                                       astra_handframe_t* handFrame);
ASTRA_API_EX astra_status_t astra_handframe_get_frameindex(astra_handframe_t handFrame,
                                                                    astra_frame_index_t* index);

ASTRA_API_EX astra_status_t astra_handframe_get_hand_count(astra_handframe_t handFrame,
                                                                    size_t* handCount);

ASTRA_API_EX astra_status_t astra_handframe_copy_hands(astra_handframe_t handFrame,
                                                                astra_handpoint_t* handPointsDestination);

ASTRA_API_EX astra_status_t astra_handframe_get_shared_hand_array(astra_handframe_t handFrame,
                                                                           astra_handpoint_t** handpoints,
                                                                           size_t* handCount);

ASTRA_API_EX astra_status_t astra_handstream_get_include_candidate_points(astra_handstream_t handStream,
                                                                                   bool* includeCandidatePoints);

ASTRA_API_EX astra_status_t astra_handstream_set_include_candidate_points(astra_handstream_t handStream,
                                                                                   bool includeCandidatePoints);

ASTRA_API_EX astra_status_t astra_reader_get_debug_handstream(astra_reader_t reader,
                                                                       astra_debug_handstream_t* debugHandStream);

ASTRA_API_EX astra_status_t astra_frame_get_debug_handframe(astra_reader_frame_t readerFrame,
                                                                     astra_debug_handframe_t* debugHandFrame);

ASTRA_API_EX astra_status_t astra_debug_handstream_get_view_type(astra_debug_handstream_t debugHandStream,
                                                                          astra_debug_hand_view_type_t* viewType);

ASTRA_API_EX astra_status_t astra_debug_handstream_set_view_type(astra_debug_handstream_t debugHandStream,
                                                                          astra_debug_hand_view_type_t viewType);

ASTRA_API_EX astra_status_t astra_debug_handstream_set_mouse_position(astra_debug_handstream_t debugHandStream,
                                                                               astra_vector2f_t normPosition);

ASTRA_API_EX astra_status_t astra_debug_handstream_set_use_mouse_probe(astra_debug_handstream_t debugHandStream,
                                                                                bool useMouseProbe);

ASTRA_API_EX astra_status_t astra_debug_handstream_set_pause_input(astra_debug_handstream_t debugHandStream,
                                                                            bool pauseInput);

ASTRA_API_EX astra_status_t astra_debug_handstream_set_lock_spawn_point(astra_debug_handstream_t debugHandStream,
                                                                                 bool lockSpawnPoint);


ASTRA_END_DECLS

#endif // HAND_CAPI_H