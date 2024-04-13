#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Train {
private:
	string trainNumber;
	string departingStation;
	string arrivalStation;
	double departingTime;
	double arrivalTime;
public:
	Train() {
		this->trainNumber = "empty";
		this->departingStation = "empty";
		this->arrivalStation = "empty";
		this->departingTime = 0.0;
		this->arrivalTime = 0.0;
	}
	Train(string trainNumber) : Train() {
		this->trainNumber = trainNumber;
	}
	Train(string trainNumber, string departingStation, string arrivalStation) : Train(trainNumber) {
		this->departingStation = departingStation;
		this->arrivalStation = arrivalStation;
	}
	Train(string trainNumber, string departingStation, string arrivalStation, double departingTime, double arrivalTime) : Train(trainNumber, departingStation, arrivalStation) {
		this->departingTime = departingTime;
		this->arrivalTime = arrivalTime;
	}

	void setTrainNumber(string trainNumber) {
		this->trainNumber = trainNumber;
	}
	void setDepartingStation(string departingStation) {
		this->departingStation = departingStation;
	}
	void setArrivalStation(string arrivalStation) {
		this->arrivalStation = arrivalStation;
	}
	void setDepartingTime(double departingTime) {
		this->departingTime = departingTime;
	}
	void setArrivalTime(double arrivalTime) {
		this->arrivalTime = arrivalTime;
	}

	string getTrainNumber() {
		return trainNumber;
	}
	string getDepartingStation() {
		return departingStation;
	}
	string getArrivalStation() {
		return arrivalStation;
	}
	double getDepartingTime() {
		return departingTime;
	}
	double setArrivalTime() {
		return arrivalTime;
	}

	void displayInfo() {
		cout << "Train number: " << trainNumber << endl;
		cout << departingStation << " - " << arrivalStation << endl;
		cout << departingTime << " - " << arrivalTime << endl;
		cout << "----------------------------------" << endl;
	}

	void addTrain() {
		string utrainNumber;
		string udepartingStation;
		string uarrivalStation;
		double udepartingTime;
		double uarrivalTime;
		cout << "Enter:" << endl;
		cout << "train number -> ";
		cin >> utrainNumber;
		cout << "department station -> ";
		cin >> udepartingStation;
		cout << "arrival station -> ";
		cin >> uarrivalStation;
		cout << "departing time -> ";
		cin >> udepartingTime;
		cout << "arrival time -> ";
		cin >> uarrivalTime;
		this->trainNumber = utrainNumber;
		this->departingStation = udepartingStation;
		this->arrivalStation = uarrivalStation;
		this->departingTime = udepartingTime;
		this->arrivalTime = uarrivalTime;

	}
};

class TrainProvider {
private:
	vector<Train> trains;
public:
	void addTrain(Train train) {
		trains.push_back(train);
	}

	void displayAllTrains() {
		cout << "All trains:" << endl;
		for (auto& train : trains) {
			train.displayInfo();
		}
	}

	void displayTrainsForRequested(string askedDepartmentStation) {
		cout << "Trains departing from " << askedDepartmentStation << ":" << endl;
		for (auto& train : trains) {
			if (train.getDepartingStation() == askedDepartmentStation) {
				train.displayInfo();
			}
		}
	}
};

int main() {
	TrainProvider trainProvider;
	Train train1;
	return 0;
}
