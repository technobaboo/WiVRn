/*
 * WiVRn VR streaming
 * Copyright (C) 2022  Guillaume Meunier <guillaume.meunier@centraliens.net>
 * Copyright (C) 2022  Patrick Nicolas <patricknicolas@laposte.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "utils/handle.h"
#include <vulkan/vulkan.h>

namespace vk
{
class buffer_view : public utils::handle<VkBufferView>
{
	VkDevice device{};

public:
	buffer_view() = default;
	buffer_view(VkDevice device, const VkBufferViewCreateInfo & create_info);
	buffer_view(const buffer_view &) = delete;
	buffer_view(buffer_view &&) = default;
	buffer_view & operator=(const buffer_view &) = delete;
	buffer_view & operator=(buffer_view &&) = default;
	~buffer_view();
};
} // namespace vk
