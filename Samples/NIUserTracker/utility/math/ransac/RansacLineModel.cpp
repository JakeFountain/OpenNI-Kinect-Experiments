/*
 * This file is part of the Autocalibration Codebase.
 *
 * The Autocalibration Codebase is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * The Autocalibration Codebase is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the Autocalibration Codebase.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2013 NUBots <nubots@nubots.net>
 */

#include "RansacLineModel.h"

namespace utility {
namespace math {
namespace ransac {

    bool RansacLineModel::regenerate(const std::array<DataPoint, REQUIRED_POINTS>& pts) {
        if(pts.size() == REQUIRED_POINTS && !arma::all(pts[0] == pts[1])) {
            setFromPoints(pts[0], pts[1]);
            return true;
        }
        else {
            return false;
        }
    }

    double RansacLineModel::calculateError(const DataPoint& p) const {
        double val = distanceToPoint(std::forward<const DataPoint&>(p));
        return val * val;
    }

}
}
}