test: build
	npm run test

.PHONY: format
format:
	npm run format

.PHONY: build
build: format
	npm run build

