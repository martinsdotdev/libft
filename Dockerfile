FROM python:3-alpine

WORKDIR /usr/src/app

RUN apk add --no-cache build-base clang clang-extra-tools valgrind ncurses git

RUN pip install --no-cache-dir compiledb norminette c-formatter-42
