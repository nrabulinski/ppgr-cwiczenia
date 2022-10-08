alias b := build
alias r := run
alias l := list

editor := env_var('EDITOR')

default: list

build FILE:
	@mkdir -p build
	c++ src/{{FILE}}.cpp -Wall -Iinclude -o build/{{FILE}}

run FILE: (build FILE)
	./build/{{FILE}}

list:
	@echo Available programs:
	@find src -maxdepth 1 -type f -name '*.cpp' | sed 's,src/\(.*\)\.cpp,\1,g'

new FILE: && (run FILE)
	cp template.cpp src/{{FILE}}.cpp
	{{editor}} src/{{FILE}}.cpp
