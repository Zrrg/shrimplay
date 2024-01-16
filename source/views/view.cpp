// Copyright (c) 2024 Zrrg. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#include "helpers/utils.h"
#include "views/view.h"

namespace shrimplay::Views {
View::View(Config *config, Mpv *mpv) {
  this->config = config;
  this->mpv = mpv;
}
}  // namespace shrimplay::Views