from pathlib import Path
import sys


MAINDIR = Path.cwd()
ROOTDIRS = [x for x in Path('.').iterdir() if x.is_dir()]


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

def getLastExDirNumber():
    pass


def main():
    createExerciseDir = createExerciseDirectory('chapter1', 'exercise.1.44')
    createExerciseFiles(createExerciseDir, 'exercise.1.44.cpp')


if __name__ == '__main__':
    main()
    print("Main function was run was run")
    print('Outside of main, just a random print')





