// Copyright (c) 2024 Zrrg. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once
#include "view.h"

namespace shrimplay::Views {
class About : public View {
 public:
  void draw() override;
};
}  // namespace shrimplay::Views