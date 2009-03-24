/*
 * 作成日: 2009/03/22
 */
package jp.ac.fit.asura.naoji.jal;

/**
 * @author $Author: sey $
 *
 * @version $Id: $
 *
 */
public abstract class JALModule {
	protected long objPtr;

	protected JALModule() {
	}

	public void wait(int taskId, int timeout) {
		_wait(objPtr, taskId, timeout);
	}

	public boolean isRunning(int taskId) {
		return _isRunning(objPtr, taskId);
	}

	native private void _wait(long objPtr, int taskId, int timeout);

	native private boolean _isRunning(long objPtr, int taskId);

}