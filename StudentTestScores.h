//Daniel A Sanchez
// S01368279
// 3/20/22
//this program show the score of two students 
//using a header file
#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScore
{
private:
	string studentName;	//The student's name
	double* testScores; //Point to array of test scores
	int numTestScores;	//Number of test scores

	// Private member function to create an
	// array of test scores.
	void createTestScoresArray(int size)
	{
		numTestScores = size;
		testScores = new double[size];
		for (int i = 0; i < size; i++)
			testScores[i] = DEFAULT_SCORE;
	}

public:
	// Constructor
	StudentTestScore(string name, int numScore)
	{
		studentName = name;
		createTestScoresArray(numScore);
	}

	// Copy constructor
	// YOU MUST IMPLEMENT THIS FUNCTION
	StudentTestScore(const StudentTestScore& obj)
	{
		//assigning the values passed from the object obj
		studentName = obj.studentName;
		numTestScores = obj.numTestScores;
		testScores = new double[obj.numTestScores];
		for (int i = 0; i < obj.numTestScores; i++) {
			testScores[i] = obj.testScores[i];
		}
	}

	// Destructor
	~StudentTestScore()
	{
		delete[]testScores; //destructor delete the memory of array testScores
	}

	// The setTestScore function sets a specific
	// test score's value.
	void setTestScore(double score, int index)
	{
		testScores[index] = score;
	}

	// Set the student's name.
	void setStudentName(string name)
	{
		studentName = name;
	}

	// Get the student's name.
	string getStudentName() const
	{
		return studentName;
	}

	// Get the number of test scores.
	int getNumTestScores() const
	{
		return numTestScores;
	}

	// Get a specific test score.
	double getTestScore(int index) const
	{
		return testScores[index];
	}

	// Overloaded = operator
	// YOU MUST IMPLEMENT THIS FUNCTION
	const StudentTestScore operator=(const StudentTestScore& right)
	{
		
		//if statement determine if the objects are not equal
		if (this != &right)
		{
			//clear the memory of testScore
			delete[] testScores;
			//assigning the values passed from the object right
			studentName = right.studentName;
			numTestScores = right.numTestScores;
			testScores = new double[right.numTestScores];
			for (int i = 0; i < numTestScores; i++)
				testScores[i] = right.testScores[i];
		}
		// returns object StudentTestScore
		return *this;
	}
};
#endif
