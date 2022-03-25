#pragma once
#include <iostream>
#include <string>
class Player {

private:
	std::string s_Name;
public:
	int i_Lives, i_Score = 0;

	/// <summary>
	/// Default constructor.
	/// </summary>
	Player() {};

	/// <summary>
	/// Override constructor.
	/// </summary>
	/// <param name="i_LivesIn"></param>
	/// <param name="i_ScoreIn"></param>
	Player(int i_LivesIn, int i_ScoreIn) {
		i_Lives = i_LivesIn;
		i_Score = i_ScoreIn;
	};

	/// <summary>
	/// Get the player lives.
	/// </summary>
	void scoreLives() {
		std::cout << "Her score  is " << this->i_Score << " and the lives are " << this->i_Lives << std::endl;
	}

	/// <summary>
	/// Set the player lives.
	/// </summary>
	/// <param name="i_LivesIn"></param>
	void setLives(int i_LivesIn) {
		i_Lives = i_LivesIn;
	}

	/// <summary>
	/// Set the player score.
	/// </summary>
	/// <param name="i_ScoreIn"></param>
	void setScore(int i_ScoreIn) {
		i_Score = i_ScoreIn;
	}

	/// <summary>
	/// Get the player lives.
	/// </summary>
	/// <returns></returns>
	int getLives() {
		return i_Lives;
	}

	/// <summary>
	/// Get the player score.
	/// </summary>
	/// <returns></returns>
	int getScore() {
		return i_Score;
	}
};
