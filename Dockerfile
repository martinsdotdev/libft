FROM python:3

WORKDIR /usr/src/app

RUN apt-get update && apt-get install -y \
	build-essential \
	clang \
	clang-format \
	valgrind \
	git \
	&& rm -rf /var/lib/apt/lists/*

RUN pip install --no-cache-dir compiledb norminette c-formatter-42
