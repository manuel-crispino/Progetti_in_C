git: 
	RED="\033[0;31m"; \
	GREEN="\033[0;32m"; \
	YELLOW="\033[0;33m"; \
	NC="\033[0m"; \
	while true; do \
		echo -e "$$YELLOW Write commit name: $$NC"; \
		read COMMITNAME; \
		if [ -n "$$COMMITNAME" ]; then \
			break; \
		else \
			echo -e "$$RED Commit name cannot be empty! $$NC"; \
		fi; \
	done; \
	echo -e "$$GREEN Commit message set: $$COMMITNAME $$NC"; \
	git add .; \
	git commit -m "$$COMMITNAME"; \
	git push origin Proweb
