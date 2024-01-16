// Copyright (c) 2024 Zrrg. All rights reserved.
// SPDX-License-Identifier: GPL-2.0-only

#pragma once
#include <functional>
#include <vector>
#include "view.h"

namespace shrimplay::Views {
class Settings : public View {
 public:
  using View::View;

  void show() override;
  void draw() override;
  void drawButtons();
  void drawGeneralTab();
  void drawInterfaceTab();
  void drawFontTab();

 private:
  ConfigData data;
  std::vector<std::function<void()>> appliers;
};
}  // namespace shrimplay::Views