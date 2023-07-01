from pathlib import Path
import sys
import re

MAINDIR = Path.cwd().parent
ROOTDIRS = [x for x in MAINDIR.iterdir() if x.is_dir()]


def createExerciseDirectory(chapterDirName: str, exDirName: str, ):

    pathToDirExercise = MAINDIR / chapterDirName / exDirName

    if not pathToDirExercise.exists():
        pathToDirExercise.mkdir()
        return pathToDirExercise
    else:
        sys.exit("Directory already exists. Terminating ...")

def createReadmeAndIO(pathToDirExercise: Path):

    pathToCreateReadme = pathToDirExercise / 'README.md'
    pathToCreateInput = pathToDirExercise / 'input.txt'
    pathToCreateOutput = pathToDirExercise / 'output.txt'
    
    if not pathToCreateReadme.exists():
        pathToCreateReadme.touch()
        pathToCreateInput.touch()
        pathToCreateOutput.touch()
    else:
        sys.exit("File already exists. Terminating ...")


def validateExerciseFileName(exFileName: str):
    
    pattern = '^exercise[0-9]\.[0-9]{1,2}$'
    prog = re.compile(pattern)
    result = prog.match(exFileName)

    return result

def validateChapterDirName(dirChapterName: str):
    pass

def validateExerciseDirName(exDirName: str):
    pass


def getLastExDirNumber(subdirNamesOfChapterDir: str):
    pass


def createChapterDir():
    #TODO Create chapter dir
    #TODO Check if the dir exists, if true -> omit dir creation, if not -> create
    pass


def main():

    #if len(sys.argv) != 4:
        #raise AssertionError('automation.py takes only two parameters two run: chapterNumber and exerciseNumber')

    chapterDirNumber, exerciseDirNumber = sys.argv[1], sys.argv[2]
    exerciseFileNumber = exerciseDirNumber[1:]

    if exerciseFileNumber[0] == '0':
        exerciseFileNumber = exerciseFileNumber[1:]

    createExerciseDirectory(f'chapter{chapterDirNumber}', f'exercise{exerciseDirNumber}')
    

    # TODO Delete the the old logic (the one that does not use template to create a new file, it created a blank file)
    # took longer to set it up a new exercise 
    #createExerciseFiles(createExerciseDir, f'exercise{exerciseFileNumber}.cpp')

    with open(MAINDIR / 'build' / 'cppNewExTemplate.cpp') as templateFile:
        with open(MAINDIR / f'chapter{chapterDirNumber}' / f'exercise{exerciseDirNumber}' / f'exercise{exerciseFileNumber}.cpp', "w") as exerciseFile:
            for line in templateFile:
                exerciseFile.write(line) 
    
    createReadmeAndIO(MAINDIR / f'chapter{chapterDirNumber}' / f'exercise{exerciseDirNumber}')

if __name__ == '__main__':
    main()
