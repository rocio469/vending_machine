SOURCE_DIR=source/

MAKE=make

all:
	@echo "Compiling ..."
	@$(MAKE) -sC $(SOURCE_DIR) all

run:
	@echo "Runing app ..."
	@$(MAKE) -sC $(SOURCE_DIR) run

clean:
	@echo "clean"
	@$(MAKE) -sC $(SOURCE_DIR) clean
