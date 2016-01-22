INFILE=$(shell ls *.txt | grep '[0-9*]' | sort -r | head -n1)

run:
	Castalia -c General -r 1

results:
	CastaliaResults -i $(INFILE) -s latency
	CastaliaResults -i $(INFILE) -s breakdown
	CastaliaResults -i $(INFILE) -s node
	CastaliaResults -i $(INFILE) -s pkts
	CastaliaResults -i $(INFILE) -s beacons
	CastaliaResults -i $(INFILE) -s time

clean:
	rm *.txt
