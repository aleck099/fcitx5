/*
 * Copyright (C) 2016~2016 by CSSlayer
 * wengxt@gmail.com
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; see the file COPYING. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef _FCITX_ADDONMANAGER_H_
#define _FCITX_ADDONMANAGER_H_

#include <memory>
#include <fcitx-utils/macros.h>

namespace fcitx {

class AddonManagerPrivate;
class AddonManager {
public:
    AddonManager();
    virtual ~AddonManager();

    void registerDefaultLoader();
    void load();
    void unload();

private:
    std::unique_ptr<AddonManagerPrivate> d_ptr;
    FCITX_DECLARE_PRIVATE(AddonManager);
};
}

#endif // _FCITX_ADDONMANAGER_H_