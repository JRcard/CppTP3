.PHONY: clean All

All:
	@echo "----------Building project:[ TP3 - Debug ]----------"
	@"$(MAKE)" -f  "TP3.mk"
clean:
	@echo "----------Cleaning project:[ TP3 - Debug ]----------"
	@"$(MAKE)" -f  "TP3.mk" clean
