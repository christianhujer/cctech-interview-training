.PHONY: test
test: hello
	./hello >actual.txt
	diff expected.txt actual.txt

.PHONY: clean
clean::
	$(RM) hello
