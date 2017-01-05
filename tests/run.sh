clear
echo "Removing pycs:"
rm -fv ../clan/*.pyc
rm -fv *.pyc
echo "Running all tests:"
python -m unittest discover -p "test_*.py"
