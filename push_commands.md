# Commands to Push Your Code

## The Correct Workflow

Your code files are in: `/Users/rajatjoshi/Desktop/CP/`
But your git repository is in: `/Users/rajatjoshi/Desktop/CP/ONLINE-JUDGE/`

## Method 1: Work directly in ONLINE-JUDGE (RECOMMENDED)
```bash
cd ~/Desktop/CP/ONLINE-JUDGE
# Create/edit your files here
git add .
git commit -m "Your commit message"
git push origin main
```

## Method 2: Copy files from CP to ONLINE-JUDGE
```bash
# Copy your new/updated files
cp ~/Desktop/CP/your_file.cpp ~/Desktop/CP/ONLINE-JUDGE/

# Then commit and push
cd ~/Desktop/CP/ONLINE-JUDGE
git add .
git commit -m "Your commit message"
git push origin main
```

## Method 3: Quick one-liner to copy and push
```bash
cd ~/Desktop/CP/ONLINE-JUDGE && cp ../your_file.cpp . && git add . && git commit -m "Your commit message" && git push origin main
```


