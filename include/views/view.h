// Copyright (c) 2024 Zrrg. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once
#include "config.h"
#include "mpv.h"

namespace shrimplay::Views {
class View {
 public:
  View(Config *config, Mpv *mpv);
  View() = default;
  virtual ~View() = default;

  virtual void draw() = 0;
  virtual void show() { m_open = true; }

 protected:
  Config *config = nullptr;
  Mpv *mpv = nullptr;
  bool m_open = false;
};
}  // namespace shrimplay::Views