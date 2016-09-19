'''
Created on Sep 15, 2016

@author: MAS2HC
'''

from jira import JIRA


def connect_to_jira():
    
    print 'Jira testing start'
    options = {
           'server': 'http://hcutwrk2040.hc.apac.bosch.com:8090'
           }
    #options = {
    #           'server': 'https://namsonx.atlassian.net'
    #}
    
    jira = JIRA(options, basic_auth= ('mas2hc', 'Klv87-04-03'))
    #jira = JIRA(options, basic_auth = ('namsonx','Test@123456'))
    projects = jira.projects()
    print 'Print project:', projects
    MT_jira = jira.project('MT')
    print 'MT project: ', MT_jira 

    print "Jira testing end"

def main():
    print 'Calling main function: \n'
    connect_to_jira()

if __name__ == '__main__':
    main()
    pass

