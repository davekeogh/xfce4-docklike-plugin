/*
 * Docklike Taskbar - A modern, minimalist taskbar for Xfce
 * Copyright (c) 2019-2020 Nicolas Szabo <nszabo@vivaldi.net>
 * Copyright (c) 2020-2021 David Keogh <davidtkeogh@gmail.com>
 * gnu.org/licenses/gpl-3.0
 */

#ifndef THEME_HPP
#define THEME_HPP

#include <gtk/gtk.h>

#include <iostream>
#include <string>

#include "Dock.hpp"

namespace Theme
{
	void init();
	void load();
	std::string get_theme_colors();
} // namespace Theme

#endif