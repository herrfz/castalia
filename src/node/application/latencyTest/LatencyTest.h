#ifndef _LATENCYTEST_H_
#define _LATENCYTEST_H_

#include "VirtualApplication.h"

using namespace std;

enum LatencyTestTimers {
	SEND_PACKET = 1
};

class LatencyTest: public VirtualApplication {
 private:
	double packet_rate;
	string recipientAddress;
	double startupDelay;

	float packet_spacing;
	int dataSN;

 protected:
	void startup();
	void fromNetworkLayer(ApplicationPacket *, const char *, double, double);
	void handleRadioControlMessage(RadioControlMessage *);
	void timerFiredCallback(int);
};

#endif				// _LATENCYTEST_APPLICATIONMODULE_H_
