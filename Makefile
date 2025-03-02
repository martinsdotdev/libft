# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 18:20:34 by martins           #+#    #+#              #
#    Updated: 2024/12/17 15:40:14 by martins          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

VERSION		:= $(shell grep -oP 'LIBFT_VERSION "\K[^"]+' include/libft.h)

# **************************************************************************** #
#    Dependencies                                                              #
# **************************************************************************** #

LIBS		:= \

INC_DIR		:= include

INCS		:= \
	$(INC_DIR) \

# **************************************************************************** #
#    Sources                                                                   #
# **************************************************************************** #

SRC_DIR		:= src

# List all source files according to the 42 norm
SRCS		:= \
	ft_ctype/ft_isupper.c \
	ft_ctype/ft_islower.c \
	ft_ctype/ft_isalpha.c \
	ft_ctype/ft_isdigit.c \
	ft_ctype/ft_isalnum.c \
	ft_ctype/ft_isascii.c \
	ft_ctype/ft_isprint.c \
	ft_ctype/ft_isspace.c \
	ft_ctype/ft_toupper.c \
	ft_ctype/ft_tolower.c \
	\
	ft_string/ft_strlen.c \
	ft_string/ft_memset.c \
	ft_string/ft_bzero.c \
	ft_string/ft_memcpy.c \
	ft_string/ft_memmove.c \
	ft_string/ft_strlcpy.c \
	ft_string/ft_strlcat.c \
	ft_string/ft_strchr.c \
	ft_string/ft_strrchr.c \
	ft_string/ft_strcspn.c \
	ft_string/ft_strncmp.c \
	ft_string/ft_memchr.c \
	ft_string/ft_memcmp.c \
	ft_string/ft_strnstr.c \
	ft_string/ft_strdup.c \
	ft_string/extra/ft_substr.c \
	ft_string/extra/ft_strjoin.c \
	ft_string/extra/ft_strtrim.c \
	ft_string/extra/ft_split.c \
	ft_string/extra/ft_join.c \
	ft_string/extra/ft_freesplit.c \
	ft_string/extra/ft_strmapi.c \
	ft_string/extra/ft_striteri.c \
	ft_string/extra/ft_strcount.c \
	ft_string/extra/ft_strall.c \
	ft_string/extra/ft_stnnew.c \
	ft_string/extra/ft_stnnew_size.c \
	ft_string/extra/ft_stnnew_empty.c \
	ft_string/extra/ft_stnfree.c \
	ft_string/extra/ft_stnlen.c \
	ft_string/extra/ft_stncap.c \
	ft_string/extra/ft_stnisempty.c \
	ft_string/extra/ft_stndup.c \
	ft_string/extra/ft_stncpy.c \
	ft_string/extra/ft_stncpy_size.c \
	ft_string/extra/ft_stncat.c \
	ft_string/extra/ft_stncat_size.c \
	ft_string/extra/ft_stnprepend.c \
	ft_string/extra/ft_stnprepend_size.c \
	ft_string/extra/ft_stncmp.c \
	ft_string/extra/ft_stntrim.c \
	ft_string/extra/ft_stnlpad.c \
	ft_string/extra/ft_stnrpad.c \
	ft_string/extra/ft_stnlstrip.c \
	ft_string/extra/ft_stnrstrip.c \
	ft_string/extra/ft_stnstrip.c \
	ft_string/extra/ft_stnlstrip_if.c \
	ft_string/extra/ft_stnrstrip_if.c \
	ft_string/extra/ft_stnstrip_if.c \
	ft_string/extra/ft_stnlstrip_space.c \
	ft_string/extra/ft_stnrstrip_space.c \
	ft_string/extra/ft_stnstrip_space.c \
	ft_string/extra/ft_stnrange.c \
	ft_string/extra/ft_stnclear.c \
	ft_string/extra/ft_stnmap.c \
	ft_string/extra/ft_stntoupper.c \
	ft_string/extra/ft_stntolower.c \
	ft_string/extra/ft_stntonumeric.c \
	ft_string/extra/ft_stnsplit.c \
	ft_string/extra/ft_stnsplit_space.c \
	ft_string/extra/ft_stnfreesplit.c \
	ft_string/extra/ft_stnjoin.c \
	ft_string/extra/ft_stnjoin_range.c \
	ft_string/extra/ft_stnexpand.c \
	ft_string/extra/ft_stncontract.c \
	ft_string/extra/ft_stnhdr.c \
	ft_string/extra/ft_stnsetlen.c \
	ft_string/extra/ft_stnsetcap.c \
	\
	ft_stdlib/ft_atoi.c \
	ft_stdlib/ft_atoll.c \
	ft_stdlib/ft_calloc.c \
	ft_stdlib/ft_itoa.c \
	ft_stdlib/ft_abs.c \
	ft_stdlib/ft_llabs.c \
	ft_stdlib/extra/ft_atoi_base.c \
	ft_stdlib/extra/ft_itoa_base.c \
	ft_stdlib/extra/ft_mexpand.c \
	ft_stdlib/extra/ft_max.c \
	ft_stdlib/extra/ft_min.c \
	ft_stdlib/extra/ft_swap.c \
	ft_stdlib/extra/ft_setrange.c \
	ft_stdlib/extra/ft_panic.c \
	ft_stdlib/extra/ft_expect.c \
	\
	ft_stdio/extra/ft_putchar_fd.c \
	ft_stdio/extra/ft_putchar.c \
	ft_stdio/extra/ft_putstr_fd.c \
	ft_stdio/extra/ft_putstr.c \
	ft_stdio/extra/ft_putendl_fd.c \
	ft_stdio/extra/ft_putendl.c \
	ft_stdio/extra/ft_putnbr_fd.c \
	ft_stdio/extra/ft_putnbr.c \
	ft_stdio/extra/ft_putnbr_base_fd.c \
	ft_stdio/extra/ft_putnbr_base.c \
	ft_stdio/extra/ft_putnbr_hex_fd.c \
	ft_stdio/extra/ft_putnbr_hex.c \
	ft_stdio/extra/get_next_line.c \
	\
	ft_linkedlist/ft_lstnew.c \
	ft_linkedlist/ft_lstadd_front.c \
	ft_linkedlist/ft_lstaddcontent_front.c \
	ft_linkedlist/ft_lstsize.c \
	ft_linkedlist/ft_lstlast.c \
	ft_linkedlist/ft_lstadd_back.c \
	ft_linkedlist/ft_lstaddcontent_back.c \
	ft_linkedlist/ft_lstdelone.c \
	ft_linkedlist/ft_lstclear.c \
	ft_linkedlist/ft_lstiter.c \
	ft_linkedlist/ft_lstmap.c \
	\
	ft_arraylist/ft_arrnew.c \
	ft_arraylist/ft_arrnew_size.c \
	ft_arraylist/ft_arrfree.c \
	ft_arraylist/ft_arrsize.c \
	ft_arraylist/ft_arrisempty.c \
	ft_arraylist/ft_arrcap.c \
	ft_arraylist/ft_arrat.c \
	ft_arraylist/ft_arrappend.c \
	ft_arraylist/ft_arrinsert.c \
	ft_arraylist/ft_arrdel.c \
	ft_arraylist/ft_arrclear.c \
	ft_arraylist/ft_arrexpand.c \
	\
	ft_stack/ft_stknew.c \
	ft_stack/ft_stkfree.c \
	ft_stack/ft_stksize.c \
	ft_stack/ft_stkisempty.c \
	ft_stack/ft_stkpeek.c \
	ft_stack/ft_stkpush.c \
	ft_stack/ft_stkpop.c \
	ft_stack/ft_stkswap.c \
	ft_stack/ft_stkrotate.c \
	ft_stack/ft_stkrrotate.c \
	\
	ft_queue/ft_quenew.c \
	ft_queue/ft_quefree.c \
	ft_queue/ft_quesize.c \
	ft_queue/ft_queisempty.c \
	ft_queue/ft_quefirst.c \
	ft_queue/ft_quelast.c \
	ft_queue/ft_queenqueue.c \
	ft_queue/ft_quedequeue.c \
	\
	ft_hashmap/ft_hshnew.c \
	ft_hashmap/ft_hshfree.c \
	ft_hashmap/ft_hshsize.c \
	ft_hashmap/ft_hshisempty.c \
	ft_hashmap/ft_hshget.c \
	ft_hashmap/ft_hshset.c \
	ft_hashmap/ft_hshdel.c \
	ft_hashmap/ft_hshdel2.c \
	ft_hashmap/ft_hshbegin.c \
	ft_hashmap/ft_hshnext.c \
	ft_hashmap/ft_hsheach.c \
	ft_hashmap/ft_hshhash.c \
	ft_hashmap/ft_hshfind.c \
	ft_hashmap/ft_hshexpand.c \
	\
	ft_color/ft_color.c \
	ft_color/ft_color_rgb.c \
	ft_color/ft_color_rgba.c \
	ft_color/ft_color_opacity.c \
	ft_color/ft_color_grayscale.c \
	ft_color/ft_color_lerp.c \
	ft_color/ft_color_random.c \
	ft_color/ft_color_parse.c \

# Or use a wildcard to generate the sources list automatically
# SRCS		:= $(shell find $(SRC_DIR) -name '*.c' -or -name '*.cpp' -or -name '*.s')

SRCS		:= $(addprefix $(SRC_DIR)/,$(SRCS))

# **************************************************************************** #
#    Build                                                                     #
# **************************************************************************** #

BUILD_DIR	:= build

OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

CC			:= cc
CFLAGS		:= -std=c11 -Wall -Wextra -Werror -pedantic

CXX			:= c++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror -pedantic

CPPFLAGS	:= $(addprefix -I,$(INCS)) -MMD -MP
LDFLAGS		:= $(addprefix -L,$(dir $(LIBS)))
LDLIBS		:= -lft

AR			:= ar
ARFLAGS		:= -r -c -s

# **************************************************************************** #
#    Misc                                                                      #
# **************************************************************************** #

RM			:= rm -f
MAKEFLAGS	+= --no-print-directory

RED			:= $(shell tput setaf 1)
GREEN		:= $(shell tput setaf 2)
YELLOW		:= $(shell tput setaf 3)
BLUE		:= $(shell tput setaf 4)
MAGENTA		:= $(shell tput setaf 5)
CYAN		:= $(shell tput setaf 6)
WHITE		:= $(shell tput setaf 7)
GRAY		:= $(shell tput setaf 8)
ERROR		:= $(shell tput setab 1)$(WHITE)
SUCCESS		:= $(shell tput setab 2)$(WHITE)
WARNING		:= $(shell tput setab 3)$(WHITE)
INFO		:= $(shell tput setab 4)$(WHITE)
BOLD		:= $(shell tput bold)
RESET		:= $(shell tput sgr0)
CLEAR		:= $(shell tput cuu1; tput el)
TITLE		:= $(YELLOW)$(basename $(NAME))$(RESET)

define message
	$(info [$(TITLE)] $(3)$(1)$(RESET) $(2))
endef

ifdef WITH_DEBUG
	TITLE	+= $(MAGENTA)debug$(RESET)
	CFLAGS	+= -g3
else
	CFLAGS	+= -O3
endif

ifdef WITH_SANITIZER
	TITLE	+= $(MAGENTA)sanitizer$(RESET)
	CFLAGS	+= -fsanitize=address,undefined
endif

# **************************************************************************** #
#    Targets                                                                   #
# **************************************************************************** #

.PHONY: all
all: $(NAME) ## Build the program

.PHONY: debug
debug: ## Build the program with debug symbols
	$(MAKE) WITH_DEBUG=1 all

.PHONY: sanitizer
sanitizer: ## Build the program with debug symbols and sanitizer
	$(MAKE) WITH_DEBUG=1 WITH_SANITIZER=1 all

.PHONY: loose
loose: ## Build the program ignoring warnings
	$(MAKE) CFLAGS="$(filter-out -Werror,$(CFLAGS))" all

# Create static library
$(NAME): $(LIBS) $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
# Or link the C/C++ objects into a final executable
# $(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
# $(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
	$(call message,CREATED,$(NAME),$(BLUE))

$(LIBS):
	$(MAKE) -C $(@D) -j4

# Compile the C/C++ sources into objects
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c # $(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
# $(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@
	-printf $(CLEAR)
	$(call message,CREATED,$(basename $(notdir $@)),$(GREEN))

.PHONY: clean
clean: ## Remove all generated object files
	for lib in $(dir $(LIBS)); do $(MAKE) -C $$lib clean; done
	$(RM) -r $(BUILD_DIR)
	$(call message,DELETED,$(BUILD_DIR),$(RED))

.PHONY: fclean
fclean: clean ## Remove all generated files
	for lib in $(dir $(LIBS)); do $(MAKE) -C $$lib fclean; done
	$(RM) $(NAME)
	$(call message,DELETED,$(NAME),$(RED))

.PHONY: re
re: ## Rebuild the program
	$(MAKE) fclean
	$(MAKE) all

run.%: $(NAME) ## Run the program (usage: make run[.<arguments>])
	$(call message,RUNNING,./$(NAME) $*,$(CYAN))
	./$(NAME) $*

.PHONY: run
.IGNORE: run
run: $(NAME)
	$(call message,RUNNING,./$(NAME),$(CYAN))
	./$(NAME)

valgrind.%: $(NAME) ## Run valgrind on the program (usage: make valgrind[.<arguments>])
	$(call message,RUNNING,valgrind ./$(NAME) $*,$(CYAN))
	valgrind \
	--leak-check=full \
	--show-leak-kinds=all \
	--track-origins=yes \
	--track-fds=yes \
	./$(NAME) $*

.PHONY: valgrind
valgrind: $(NAME)
	$(call message,RUNNING,valgrind ./$(NAME),$(CYAN))
	valgrind \
	--leak-check=full \
	--show-leak-kinds=all \
	--track-origins=yes \
	--track-fds=yes \
	./$(NAME)

.PHONY: norm
norm: ## Check the norm
	norminette -R CheckForbiddenSourceHeader | grep --invert-match "OK"

.PHONY: format
format: ## Format the code
	clang-format \
	-i $(shell find $(SRC_DIR) $(INC_DIR) -name '*.c' -or -name '*.cpp' -or -name '*.h' -or -name '*.hpp')

.PHONY: format.norm
format.norm: ## Format the code according to the norm
	c_formatter_42 \
	$(shell find $(SRC_DIR) $(INC_DIR) -name '*.c' -or -name '*.cpp' -or -name '*.h' -or -name '*.hpp')

.PHONY: test
test: ## TODO: Run the tests
	$(info $(INFO)TODO$(RESET) Run the tests)

.PHONY: index
index: ## Generate `compile_commands.json`
	compiledb --no-build make

.PHONY: docs
docs: ## Generate the documentation
	doxygen

.PHONY: update
update: ## Update the repository and its submodules
	git stash
	git pull
	git submodule update --init
	git stash pop

print.%: ## Print the value of a variable (usage: make print.<variable>)
	$(info '$*'='$($*)')

info.%: ## Print the target recipe (usage: make info.<target>)
	$(MAKE) --dry-run --always-make $* | grep -v "info"

force.%: ## Force execution of a target recipe (usage: make re.<target>)
	$(MAKE) --always-make $*

docker.%: ## Run a target inside a container (usage: make docker.<target>)
	docker compose run --rm make $*

.PHONY: version
version: ## Print the current version of the project
	$(info $(VERSION))

.PHONY: help
.IGNORE: help
help: ## Show this message
	echo "$(BOLD)$(TITLE)$(RESET) $(GRAY)(v$(VERSION))$(RESET)"
	echo
	echo "$(BOLD)Usage: make [<name>=<value>...]$(RESET) $(BOLD)$(CYAN)[target...]$(RESET)"
	echo
	echo "$(BOLD)Targets:$(RESET)"
	grep -E '^[a-zA-Z_.%-]+:.*?## .*$$' Makefile \
	| awk 'BEGIN {FS = ":.*?## "}; {printf "%2s$(CYAN)%-20s$(RESET) %s\n", "", $$1, $$2}'

.DEFAULT_GOAL := all
.SILENT:
.DELETE_ON_ERROR:

-include $(DEPS)
