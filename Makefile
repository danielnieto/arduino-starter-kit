# Auto-detected
FQBN := $(shell arduino-cli board list | awk '/Serial Port \(USB\)/ {print $$8}')
PORT := $(shell arduino-cli board list | awk '/Serial Port \(USB\)/ {print $$1}')

SKETCH ?= $(error Please specify a sketch: make upload SKETCH=02_spaceship)

compile:
	arduino-cli compile --fqbn $(FQBN) $(SKETCH)

upload: compile
	arduino-cli upload -p $(PORT) --fqbn $(FQBN) $(SKETCH)

monitor:
	arduino-cli monitor -p $(PORT)
