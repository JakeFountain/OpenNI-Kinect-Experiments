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

#ifndef UTILITY_MATH_RANSAC_RANSACRESULT_H
#define UTILITY_MATH_RANSAC_RANSACRESULT_H

// #include <nuclear>
#include <utility>
#include <vector>

namespace utility {
namespace math {
namespace ransac {

    template <typename Iterator, typename Model>
    struct RansacResult {
    public:

        RansacResult() {
        }

        RansacResult(const Model& model, const Iterator& first, const Iterator& last)
        : model(model)
        , first(first)
        , last(last) {
        }

        Model model;

        Iterator begin() const {
            return first;
        }

        Iterator end() const {
            return last;
        }

    private:
        Iterator first;
        Iterator last;
    };

}
}
}

#endif
