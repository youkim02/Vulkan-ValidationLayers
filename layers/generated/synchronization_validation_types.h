// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See helper_file_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2015-2021 The Khronos Group Inc.
 * Copyright (c) 2015-2021 Valve Corporation
 * Copyright (c) 2015-2021 LunarG, Inc.
 * Copyright (c) 2015-2021 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Mark Lobodzinski <mark@lunarg.com>
 * Author: Courtney Goeltzenleuchter <courtneygo@google.com>
 * Author: Tobin Ehlis <tobine@google.com>
 * Author: Chris Forbes <chrisforbes@google.com>
 * Author: John Zulauf<jzulauf@lunarg.com>
 *
 ****************************************************************************/

#pragma once

#include <array>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdint.h>
#include <vulkan/vulkan.h>

using SyncStageAccessFlags = std::bitset<64>;

// clang-format off

// Unique number for each  stage/access combination
enum SyncStageAccessIndex {
    SYNC_DRAW_INDIRECT_INDIRECT_COMMAND_READ = 0,
    SYNC_DRAW_INDIRECT_TRANSFORM_FEEDBACK_COUNTER_READ_EXT = 1,
    SYNC_VERTEX_INPUT_INDEX_READ = 2,
    SYNC_VERTEX_INPUT_VERTEX_ATTRIBUTE_READ = 3,
    SYNC_VERTEX_SHADER_SHADER_READ = 4,
    SYNC_VERTEX_SHADER_SHADER_WRITE = 5,
    SYNC_VERTEX_SHADER_UNIFORM_READ = 6,
    SYNC_TESSELLATION_CONTROL_SHADER_SHADER_READ = 7,
    SYNC_TESSELLATION_CONTROL_SHADER_SHADER_WRITE = 8,
    SYNC_TESSELLATION_CONTROL_SHADER_UNIFORM_READ = 9,
    SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_READ = 10,
    SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_WRITE = 11,
    SYNC_TESSELLATION_EVALUATION_SHADER_UNIFORM_READ = 12,
    SYNC_GEOMETRY_SHADER_SHADER_READ = 13,
    SYNC_GEOMETRY_SHADER_SHADER_WRITE = 14,
    SYNC_GEOMETRY_SHADER_UNIFORM_READ = 15,
    SYNC_TRANSFORM_FEEDBACK_EXT_TRANSFORM_FEEDBACK_COUNTER_WRITE_EXT = 16,
    SYNC_TRANSFORM_FEEDBACK_EXT_TRANSFORM_FEEDBACK_WRITE_EXT = 17,
    SYNC_FRAGMENT_DENSITY_PROCESS_EXT_FRAGMENT_DENSITY_MAP_READ_EXT = 18,
    SYNC_TASK_SHADER_NV_SHADER_READ = 19,
    SYNC_TASK_SHADER_NV_SHADER_WRITE = 20,
    SYNC_TASK_SHADER_NV_UNIFORM_READ = 21,
    SYNC_MESH_SHADER_NV_SHADER_READ = 22,
    SYNC_MESH_SHADER_NV_SHADER_WRITE = 23,
    SYNC_MESH_SHADER_NV_UNIFORM_READ = 24,
    SYNC_SHADING_RATE_IMAGE_NV_SHADING_RATE_IMAGE_READ_NV = 25,
    SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ = 26,
    SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE = 27,
    SYNC_FRAGMENT_SHADER_INPUT_ATTACHMENT_READ = 28,
    SYNC_FRAGMENT_SHADER_SHADER_READ = 29,
    SYNC_FRAGMENT_SHADER_SHADER_WRITE = 30,
    SYNC_FRAGMENT_SHADER_UNIFORM_READ = 31,
    SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ = 32,
    SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE = 33,
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ = 34,
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_NONCOHERENT_EXT = 35,
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_WRITE = 36,
    SYNC_COMPUTE_SHADER_SHADER_READ = 37,
    SYNC_COMPUTE_SHADER_SHADER_WRITE = 38,
    SYNC_COMPUTE_SHADER_UNIFORM_READ = 39,
    SYNC_TRANSFER_TRANSFER_READ = 40,
    SYNC_TRANSFER_TRANSFER_WRITE = 41,
    SYNC_COMMAND_PREPROCESS_NV_COMMAND_PREPROCESS_READ_NV = 42,
    SYNC_COMMAND_PREPROCESS_NV_COMMAND_PREPROCESS_WRITE_NV = 43,
    SYNC_CONDITIONAL_RENDERING_EXT_CONDITIONAL_RENDERING_READ_EXT = 44,
    SYNC_RAY_TRACING_SHADER_KHR_ACCELERATION_STRUCTURE_READ_KHR = 45,
    SYNC_RAY_TRACING_SHADER_KHR_SHADER_READ = 46,
    SYNC_RAY_TRACING_SHADER_KHR_SHADER_WRITE = 47,
    SYNC_RAY_TRACING_SHADER_KHR_UNIFORM_READ = 48,
    SYNC_ACCELERATION_STRUCTURE_BUILD_KHR_ACCELERATION_STRUCTURE_READ_KHR = 49,
    SYNC_ACCELERATION_STRUCTURE_BUILD_KHR_ACCELERATION_STRUCTURE_WRITE_KHR = 50,
    SYNC_HOST_HOST_READ = 51,
    SYNC_HOST_HOST_WRITE = 52,
    SYNC_IMAGE_LAYOUT_TRANSITION = 53,
    SYNC_QUEUE_FAMILY_OWNERSHIP_TRANSFER = 54,
};

// Unique bit for each  stage/access combination
static const SyncStageAccessFlags SYNC_DRAW_INDIRECT_INDIRECT_COMMAND_READ_BIT = (SyncStageAccessFlags(1) << SYNC_DRAW_INDIRECT_INDIRECT_COMMAND_READ);
static const SyncStageAccessFlags SYNC_DRAW_INDIRECT_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_DRAW_INDIRECT_TRANSFORM_FEEDBACK_COUNTER_READ_EXT);
static const SyncStageAccessFlags SYNC_VERTEX_INPUT_INDEX_READ_BIT = (SyncStageAccessFlags(1) << SYNC_VERTEX_INPUT_INDEX_READ);
static const SyncStageAccessFlags SYNC_VERTEX_INPUT_VERTEX_ATTRIBUTE_READ_BIT = (SyncStageAccessFlags(1) << SYNC_VERTEX_INPUT_VERTEX_ATTRIBUTE_READ);
static const SyncStageAccessFlags SYNC_VERTEX_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_VERTEX_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_VERTEX_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_VERTEX_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_VERTEX_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_VERTEX_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_TESSELLATION_CONTROL_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_CONTROL_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_TESSELLATION_CONTROL_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_CONTROL_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_TESSELLATION_CONTROL_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_CONTROL_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_TESSELLATION_EVALUATION_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TESSELLATION_EVALUATION_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_GEOMETRY_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_GEOMETRY_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_GEOMETRY_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_GEOMETRY_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_GEOMETRY_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_GEOMETRY_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_TRANSFORM_FEEDBACK_BIT_EXT_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_TRANSFORM_FEEDBACK_EXT_TRANSFORM_FEEDBACK_COUNTER_WRITE_EXT);
static const SyncStageAccessFlags SYNC_TRANSFORM_FEEDBACK_BIT_EXT_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_TRANSFORM_FEEDBACK_EXT_TRANSFORM_FEEDBACK_WRITE_EXT);
static const SyncStageAccessFlags SYNC_FRAGMENT_DENSITY_PROCESS_BIT_EXT_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_FRAGMENT_DENSITY_PROCESS_EXT_FRAGMENT_DENSITY_MAP_READ_EXT);
static const SyncStageAccessFlags SYNC_TASK_SHADER_NV_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TASK_SHADER_NV_SHADER_READ);
static const SyncStageAccessFlags SYNC_TASK_SHADER_NV_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_TASK_SHADER_NV_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_TASK_SHADER_NV_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TASK_SHADER_NV_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_MESH_SHADER_NV_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_MESH_SHADER_NV_SHADER_READ);
static const SyncStageAccessFlags SYNC_MESH_SHADER_NV_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_MESH_SHADER_NV_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_MESH_SHADER_NV_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_MESH_SHADER_NV_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_SHADING_RATE_IMAGE_BIT_NV_SHADING_RATE_IMAGE_READ_BIT_NV = (SyncStageAccessFlags(1) << SYNC_SHADING_RATE_IMAGE_NV_SHADING_RATE_IMAGE_READ_NV);
static const SyncStageAccessFlags SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ_BIT = (SyncStageAccessFlags(1) << SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ);
static const SyncStageAccessFlags SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE);
static const SyncStageAccessFlags SYNC_FRAGMENT_SHADER_INPUT_ATTACHMENT_READ_BIT = (SyncStageAccessFlags(1) << SYNC_FRAGMENT_SHADER_INPUT_ATTACHMENT_READ);
static const SyncStageAccessFlags SYNC_FRAGMENT_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_FRAGMENT_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_FRAGMENT_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_FRAGMENT_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_FRAGMENT_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_FRAGMENT_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ_BIT = (SyncStageAccessFlags(1) << SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ);
static const SyncStageAccessFlags SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE);
static const SyncStageAccessFlags SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_BIT = (SyncStageAccessFlags(1) << SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ);
static const SyncStageAccessFlags SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_NONCOHERENT_EXT);
static const SyncStageAccessFlags SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_WRITE);
static const SyncStageAccessFlags SYNC_COMPUTE_SHADER_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_COMPUTE_SHADER_SHADER_READ);
static const SyncStageAccessFlags SYNC_COMPUTE_SHADER_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_COMPUTE_SHADER_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_COMPUTE_SHADER_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_COMPUTE_SHADER_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_TRANSFER_TRANSFER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_TRANSFER_TRANSFER_READ);
static const SyncStageAccessFlags SYNC_TRANSFER_TRANSFER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_TRANSFER_TRANSFER_WRITE);
static const SyncStageAccessFlags SYNC_COMMAND_PREPROCESS_BIT_NV_COMMAND_PREPROCESS_READ_BIT_NV = (SyncStageAccessFlags(1) << SYNC_COMMAND_PREPROCESS_NV_COMMAND_PREPROCESS_READ_NV);
static const SyncStageAccessFlags SYNC_COMMAND_PREPROCESS_BIT_NV_COMMAND_PREPROCESS_WRITE_BIT_NV = (SyncStageAccessFlags(1) << SYNC_COMMAND_PREPROCESS_NV_COMMAND_PREPROCESS_WRITE_NV);
static const SyncStageAccessFlags SYNC_CONDITIONAL_RENDERING_BIT_EXT_CONDITIONAL_RENDERING_READ_BIT_EXT = (SyncStageAccessFlags(1) << SYNC_CONDITIONAL_RENDERING_EXT_CONDITIONAL_RENDERING_READ_EXT);
static const SyncStageAccessFlags SYNC_RAY_TRACING_SHADER_BIT_KHR_ACCELERATION_STRUCTURE_READ_BIT_KHR = (SyncStageAccessFlags(1) << SYNC_RAY_TRACING_SHADER_KHR_ACCELERATION_STRUCTURE_READ_KHR);
static const SyncStageAccessFlags SYNC_RAY_TRACING_SHADER_KHR_SHADER_READ_BIT = (SyncStageAccessFlags(1) << SYNC_RAY_TRACING_SHADER_KHR_SHADER_READ);
static const SyncStageAccessFlags SYNC_RAY_TRACING_SHADER_KHR_SHADER_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_RAY_TRACING_SHADER_KHR_SHADER_WRITE);
static const SyncStageAccessFlags SYNC_RAY_TRACING_SHADER_KHR_UNIFORM_READ_BIT = (SyncStageAccessFlags(1) << SYNC_RAY_TRACING_SHADER_KHR_UNIFORM_READ);
static const SyncStageAccessFlags SYNC_ACCELERATION_STRUCTURE_BUILD_BIT_KHR_ACCELERATION_STRUCTURE_READ_BIT_KHR = (SyncStageAccessFlags(1) << SYNC_ACCELERATION_STRUCTURE_BUILD_KHR_ACCELERATION_STRUCTURE_READ_KHR);
static const SyncStageAccessFlags SYNC_ACCELERATION_STRUCTURE_BUILD_BIT_KHR_ACCELERATION_STRUCTURE_WRITE_BIT_KHR = (SyncStageAccessFlags(1) << SYNC_ACCELERATION_STRUCTURE_BUILD_KHR_ACCELERATION_STRUCTURE_WRITE_KHR);
static const SyncStageAccessFlags SYNC_HOST_HOST_READ_BIT = (SyncStageAccessFlags(1) << SYNC_HOST_HOST_READ);
static const SyncStageAccessFlags SYNC_HOST_HOST_WRITE_BIT = (SyncStageAccessFlags(1) << SYNC_HOST_HOST_WRITE);
static const SyncStageAccessFlags SYNC_IMAGE_LAYOUT_TRANSITION_BIT = (SyncStageAccessFlags(1) << SYNC_IMAGE_LAYOUT_TRANSITION);
static const SyncStageAccessFlags SYNC_QUEUE_FAMILY_OWNERSHIP_TRANSFER_BIT = (SyncStageAccessFlags(1) << SYNC_QUEUE_FAMILY_OWNERSHIP_TRANSFER);

// Map of the StageAccessIndices from the StageAccess Bit
extern const std::unordered_map<SyncStageAccessFlags, SyncStageAccessIndex> syncStageAccessIndexByStageAccessBit;

struct SyncStageAccessInfoType {
    const char *name;
    VkPipelineStageFlagBits stage_mask;
    VkAccessFlagBits access_mask;
    SyncStageAccessIndex stage_access_index;
    SyncStageAccessFlags stage_access_bit;
};

// Array of text names and component masks for each stage/access index
extern const std::array<SyncStageAccessInfoType, 55> syncStageAccessInfoByStageAccessIndex;

// Constants defining the mask of all read and write stage_access states
static const SyncStageAccessFlags syncStageAccessReadMask = ( //  Mask of all read StageAccess bits
    SYNC_DRAW_INDIRECT_INDIRECT_COMMAND_READ_BIT |
    SYNC_DRAW_INDIRECT_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT |
    SYNC_VERTEX_INPUT_INDEX_READ_BIT |
    SYNC_VERTEX_INPUT_VERTEX_ATTRIBUTE_READ_BIT |
    SYNC_VERTEX_SHADER_SHADER_READ_BIT |
    SYNC_VERTEX_SHADER_UNIFORM_READ_BIT |
    SYNC_TESSELLATION_CONTROL_SHADER_SHADER_READ_BIT |
    SYNC_TESSELLATION_CONTROL_SHADER_UNIFORM_READ_BIT |
    SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_READ_BIT |
    SYNC_TESSELLATION_EVALUATION_SHADER_UNIFORM_READ_BIT |
    SYNC_GEOMETRY_SHADER_SHADER_READ_BIT |
    SYNC_GEOMETRY_SHADER_UNIFORM_READ_BIT |
    SYNC_FRAGMENT_DENSITY_PROCESS_BIT_EXT_FRAGMENT_DENSITY_MAP_READ_BIT_EXT |
    SYNC_TASK_SHADER_NV_SHADER_READ_BIT |
    SYNC_TASK_SHADER_NV_UNIFORM_READ_BIT |
    SYNC_MESH_SHADER_NV_SHADER_READ_BIT |
    SYNC_MESH_SHADER_NV_UNIFORM_READ_BIT |
    SYNC_SHADING_RATE_IMAGE_BIT_NV_SHADING_RATE_IMAGE_READ_BIT_NV |
    SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ_BIT |
    SYNC_FRAGMENT_SHADER_INPUT_ATTACHMENT_READ_BIT |
    SYNC_FRAGMENT_SHADER_SHADER_READ_BIT |
    SYNC_FRAGMENT_SHADER_UNIFORM_READ_BIT |
    SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_READ_BIT |
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_BIT |
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT |
    SYNC_COMPUTE_SHADER_SHADER_READ_BIT |
    SYNC_COMPUTE_SHADER_UNIFORM_READ_BIT |
    SYNC_TRANSFER_TRANSFER_READ_BIT |
    SYNC_COMMAND_PREPROCESS_BIT_NV_COMMAND_PREPROCESS_READ_BIT_NV |
    SYNC_CONDITIONAL_RENDERING_BIT_EXT_CONDITIONAL_RENDERING_READ_BIT_EXT |
    SYNC_RAY_TRACING_SHADER_BIT_KHR_ACCELERATION_STRUCTURE_READ_BIT_KHR |
    SYNC_RAY_TRACING_SHADER_KHR_SHADER_READ_BIT |
    SYNC_RAY_TRACING_SHADER_KHR_UNIFORM_READ_BIT |
    SYNC_ACCELERATION_STRUCTURE_BUILD_BIT_KHR_ACCELERATION_STRUCTURE_READ_BIT_KHR |
    SYNC_HOST_HOST_READ_BIT
);

static const SyncStageAccessFlags syncStageAccessWriteMask = ( //  Mask of all write StageAccess bits
    SYNC_VERTEX_SHADER_SHADER_WRITE_BIT |
    SYNC_TESSELLATION_CONTROL_SHADER_SHADER_WRITE_BIT |
    SYNC_TESSELLATION_EVALUATION_SHADER_SHADER_WRITE_BIT |
    SYNC_GEOMETRY_SHADER_SHADER_WRITE_BIT |
    SYNC_TRANSFORM_FEEDBACK_BIT_EXT_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT |
    SYNC_TRANSFORM_FEEDBACK_BIT_EXT_TRANSFORM_FEEDBACK_WRITE_BIT_EXT |
    SYNC_TASK_SHADER_NV_SHADER_WRITE_BIT |
    SYNC_MESH_SHADER_NV_SHADER_WRITE_BIT |
    SYNC_EARLY_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT |
    SYNC_FRAGMENT_SHADER_SHADER_WRITE_BIT |
    SYNC_LATE_FRAGMENT_TESTS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT |
    SYNC_COLOR_ATTACHMENT_OUTPUT_COLOR_ATTACHMENT_WRITE_BIT |
    SYNC_COMPUTE_SHADER_SHADER_WRITE_BIT |
    SYNC_TRANSFER_TRANSFER_WRITE_BIT |
    SYNC_COMMAND_PREPROCESS_BIT_NV_COMMAND_PREPROCESS_WRITE_BIT_NV |
    SYNC_RAY_TRACING_SHADER_KHR_SHADER_WRITE_BIT |
    SYNC_ACCELERATION_STRUCTURE_BUILD_BIT_KHR_ACCELERATION_STRUCTURE_WRITE_BIT_KHR |
    SYNC_HOST_HOST_WRITE_BIT |
    SYNC_IMAGE_LAYOUT_TRANSITION_BIT |
    SYNC_QUEUE_FAMILY_OWNERSHIP_TRANSFER_BIT
);

// Bit order mask of stage_access bit for each stage
extern const std::map<VkPipelineStageFlags, SyncStageAccessFlags> syncStageAccessMaskByStageBit;

// Bit order mask of stage_access bit for each access
extern const std::map<VkAccessFlags, SyncStageAccessFlags> syncStageAccessMaskByAccessBit;

// stage_access index for each stage and access
extern const std::map<VkPipelineStageFlags, std::map<VkAccessFlags, SyncStageAccessIndex>> syncStageAccessIndexByStageAndAccess;

// Direct VkPipelineStageFlags to valid VkAccessFlags lookup table
extern const std::map<VkPipelineStageFlags, VkAccessFlags> syncDirectStageToAccessMask;

// Pipeline stages corresponding to VK_PIPELINE_STAGE_ALL_COMMANDS_BIT for each VkQueueFlagBits
extern const std::map<VkQueueFlagBits, VkPipelineStageFlags> syncAllCommandStagesByQueueFlags;

// Masks of logically earlier stage flags for a given stage flag
extern const std::map<VkPipelineStageFlagBits, VkPipelineStageFlags> syncLogicallyEarlierStages;

// Masks of logically later stage flags for a given stage flag
extern const std::map<VkPipelineStageFlagBits, VkPipelineStageFlags> syncLogicallyLaterStages;

// Lookup table of stage orderings
extern const std::map<VkPipelineStageFlagBits, int> syncStageOrder;

struct SyncShaderStageAccess {
    SyncStageAccessIndex shader_read;
    SyncStageAccessIndex shader_write;
    SyncStageAccessIndex uniform_read;
};

extern const std::map<VkShaderStageFlagBits, SyncShaderStageAccess> syncStageAccessMaskByShaderStage;
