// Copyright 2018 Slightech Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef MYNTEYE_INTERNAL_IMAGE_UTILS_H_
#define MYNTEYE_INTERNAL_IMAGE_UTILS_H_
#pragma once

#include "mynteye/device/image.h"

MYNTEYE_BEGIN_NAMESPACE

namespace images {

Image::pointer split_left_color(Image::pointer color);
Image::pointer split_right_color(Image::pointer color);

}  // namespace images

MYNTEYE_END_NAMESPACE

#endif  // MYNTEYE_INTERNAL_IMAGE_UTILS_H_
