git: 
	@while true; do \
		echo "Write commit name:"; \
		read COMMITNAME; \
		if [ -n "$$COMMITNAME" ]; then \
			break; \
		else \
			echo "Commit name cannot be empty!"; \
		fi; \
	done; \
	git add .; \
	git commit -m "$$COMMITNAME"; \
	git push origin Proweb
