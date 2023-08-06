from pathlib import Path
import sys
import re

MAINDIR = Path.cwd().parent
ROOTDIRS = [x for x in MAINDIR.iterdir() if x.is_dir()]


def createChapterDirectory(chapterDirName: str) -> None:
    
    pathToDirChapter = MAINDIR / chapterDirName
    # If we start a new chapter, create a directory chapter{number} incpp-primer5th-exercises
    if not pathToDirChapter.exists():
        pathToDirChapter.mkdir()
    # If chapter already exists, do nothing, directory exists so wait for createExerciseDirectory() function call
    else:
        pass 

def createExerciseDirectory(chapterDirName: str, exDirName: str) -> None:

    pathToDirExercise = MAINDIR / chapterDirName / exDirName
    # If we create a new exercise, create a directory for it
    if not pathToDirExercise.exists():
        pathToDirExercise.mkdir()
    # If an exercise exists, abort the program and do not create file templates later on
    else:
        sys.exit(f"Directory {exDirName} already exists. Terminating ...")

def createReadmeAndIO(pathToDirExercise: Path):
    # Create Path objects for files to be created
    pathToCreateReadme = pathToDirExercise / 'README.md'
    pathToCreateInput = pathToDirExercise / 'input.txt'
    pathToCreateOutput = pathToDirExercise / 'output.txt'
    
    # Use touch to create README, input.txt and output.txt
    if not pathToCreateReadme.exists():
        pathToCreateReadme.touch()
        pathToCreateInput.touch()
        pathToCreateOutput.touch()
    # If files alread exist, abort the program
    else:
        sys.exit("File already exists. Terminating ...")

def main():

    # Get input parameters
    chapterDirNumber, exerciseDirNumber = sys.argv[1], sys.argv[2]
    # 
    exerciseFileNumber = exerciseDirNumber[1:]

    if exerciseFileNumber[0] == '0':
        exerciseFileNumber = exerciseFileNumber[1:]

    createChapterDirectory(f'chapter{chapterDirNumber}')
    createExerciseDirectory(f'chapter{chapterDirNumber}', f'exercise{exerciseDirNumber}')
    
    # Copy a template cppNewExTemplate.cpp from build directory and create a new
    # file inside the specified directory with the template content 
    with open(MAINDIR / 'build' / 'cppNewExTemplate.cpp') as templateFile:
        with open(MAINDIR / f'chapter{chapterDirNumber}' / f'exercise{exerciseDirNumber}' / f'exercise{exerciseFileNumber}.cpp', "w") as exerciseFile:
            for line in templateFile:
                exerciseFile.write(line) 
    
    # Creatte README.md, input.txt and output.txt
    createReadmeAndIO(MAINDIR / f'chapter{chapterDirNumber}' / f'exercise{exerciseDirNumber}')

if __name__ == '__main__':
    main()
