/*
 * Copyright 2018 Aman Mehara
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MEHARA_THE_COIN_CHANGE_PROBLEM_NAIVE_H_
#define MEHARA_THE_COIN_CHANGE_PROBLEM_NAIVE_H_

#include <vector>

class TheCoinChangeProblem {

	std::vector<int> coin_denominations_;

	int Combinations(int coins, int amount);

public:

	TheCoinChangeProblem(std::vector<int> coin_denominations) {
		coin_denominations_ = coin_denominations;
	}

	int Combinations(int amount);

};

#endif  // MEHARA_THE_COIN_CHANGE_PROBLEM_NAIVE_H_