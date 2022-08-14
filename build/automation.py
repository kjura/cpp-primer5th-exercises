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

def createExerciseFiles(pathToDirExercise: Path, exFileName: str):


    pathToCreateExFile = pathToDirExercise / exFileName
    pathToCreateReadme = pathToDirExercise / 'README.md'

    if not pathToCreateExFile.exists():
        pathToCreateExFile.touch()
    else:
        sys.exit("File already exists. Terminating ...")

    
    if not pathToCreateReadme.exists():
        pathToCreateReadme.touch()
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


def main():

    #if len(sys.argv) != 4:
        #raise AssertionError('automation.py takes only two parameters two run: chapterNumber and exerciseNumber')

    chapterDirNumber, exerciseDirNumber = sys.argv[1], sys.argv[2]
    exerciseFileNumber = exerciseDirNumber[1:]

    if exerciseFileNumber[0] == '0':
        exerciseFileNumber = exerciseFileNumber[1:]

    createExerciseDir = createExerciseDirectory(f'chapter{chapterDirNumber}', f'exercise{exerciseDirNumber}')
    createExerciseFiles(createExerciseDir, f'exercise{exerciseFileNumber}.cpp')


if __name__ == '__main__':
    main()
